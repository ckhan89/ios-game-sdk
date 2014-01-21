# Appota Game SDK
Other languages: [Vietnamese](README.md) | [Chinese](README_CN.md)

## Get Started

Appota Game SDK is the simplest way to integrate user and payment for
your game in Appota system. This SDK provides solutions for payment
methods such as: SMS, Card. Internet Banking, Paypal and Apple Payment.

## Steps to integrate SDK

* [Setup Appota SDK](#1-setup-appota-sdk)

* [Config SDK - Login function](#2-config-sdk---login-function)

* [Config SDK - Payment function](#3-config-sdk---payment-function)
 
* [Setup SDK variables](#4-setup-sdk-variables)

* [Apppta SDK flow](#5-appota--sdk-flow)

-------------------------------

## 1. Setup Appota SDK

### Import AppotaSDK.framework into project

Drag and drop AppotaSDK.framework and AppotaBundle.bundle into your project.

Tick on checkbox: “Copy items into destination group's folder (if needed)”.

In Project app’s target settings section, find [Build phases] and open
Link Binary with Libraries. Click on ‘+’ button and add these frameworks:

```
AppotaSDK, QuaztCore, CoreText, StoreKit, AudioToolBox, MobileCoreServices, AVFoudation, CoreVideo,
MessageUI, Security, SystemConfiguration, CFNetwork, OpenGLES, CoreMedia, libxml2.dylib, libsqlite3.dylib
```

![](docs/vn/step1.jpg)

In project build settings section, find Other Linker Flags, add these linker flags: -ObjC, -lc++ và -all_load.

![](docs/vn/step2.jpg)

Import header file to source file where do you want to use SDK:

``` objective-c
#import <AppotaSDK/AppotaSDK.h>
```

### Config plist with CLIENT_KEY

Add 1 string AppotaClientId with the value is CLIENT_ID

Add more schema: Add 1 string URL Array types. Create 1 item more with URL Schemes is appotaCLIENT_ID.

For example: If CLIENT_ID = b804d6421df6ae7dbcd51469e4d8ee0005101f540,
schemes will be appotab804d6421df6ae7dbcd51469e4d8ee0005101f540.

![](docs/vn/step3.jpg)
 
## 2. Config SDK - Login function

### Config SDK in Appdelegate:

Setup SDK in Appdelegate:

- AppDelegate.h			
Add protocol *AppotaGameSDKConfigureDelegate* to AppDelegate

- AppDelegate.m			
Config AppotaGameSDK after setting up windows in Appdelegate (Reference *AppotaGameTest/AppDelegate.m*) by AppotaGameSDKConfigure class
	* Init AppotaGameSDKConfigure with 
		* CLIENT_ID - Config con dev.appota.com if app is not in published state please use SANDBOX_CLIENT_ID instead
		* CLIENT_SECRET - Config con dev.appota.com if app is not in published state please use SANDBOX_CLIENT_SECRET instead
		* INAPP_API_KEY - Config con dev.appota.com if app is not in published state please use SANDBOX_INAPP_API_KEY instead
		* noticeUrl - URL for payment notification
		* configUrl - URL for payment config (implemented on your server)
	* Sample:
	
	``` objective-c
    [AppotaGameSDKConfigure configureWithClientID:CLIENT_ID
                            withClientSecret:CLIENT_SECRET
                            withInAppAPIKey:INAPP_API_KEY
                                  withState:@"YOUR_PAYMENT_STATE"                            
                            withNoticeUrl:@"http://filestore9.com/test.php"
                            withConfigUrl:@"http://developer.appota.com/config.php"
     ];
	```
	* Set delegate for AppotaGameSDKConfigure (should use AppDelegate for delegate)
	
	``` objective-c
    [AppotaGameSDKConfigure sharedGameConfig].delegate = self;	
	```		
	* Handle login status by protocol function callback _- (void) didFinishLogin:(NSDictionary *)userInfoDict_ (UserInfo dict can be used for verification process)
	* Handle logout status by protocol function callback _- (void) didLogOut:(NSString*) userName_
	* Handle payment status by protocol function callback _- (void) didFinishPaymentWithDictionary:(NSDictionary*)paymentDict withState:(AppotaPaymentState)status withError:(NSError*) error_

	
###  Integration social login
* Add handle open URL in your AppDelegate by this function :
		
	```objc
	(BOOL) application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    		return [AppotaGameSDKConfigure handleOpenURL:url sourceApplication:sourceApplication annotation:annotation];
	}
	```
		
* [Integrate Facebook Login](FBLOGIN_INTEGRATION_EN.md)
* [Integrate Google Login](GGLOGIN_INTEGRATION_EN.md)
* [Integrate TWITTER Login](TWITTERLOGIN_INTEGRATION_EN.md)

## 3. Config SDK - Payment function

###  JSON Config URL
- [Detail information about JSON config](JSON_CONFIG_EN.md)
- Config jsonConfigUrl (for remote updating feature like: promotion, login setting, …) at init step (step 2) or by setting `[AppotaGameSDKConfigure sharedGameConfig].jsonConfigUrl`
- Sample content of JSON config (currently used in our example) [http://developer.appota.com/config.php](http://developer.appota.com/config.php)

- You can generate json content at : [https://developer.appota.com/sdktool.php](https://developer.appota.com/sdktool.php) and upload to your server

### Payment integration
- [Server IPN payment implementation](https://github.com/appota/ios-game-sdk/wiki)
## 4. Setup SDK variables and function
- Variables will define detail of your login and payment GUI, how your app will look like with AppotaSDK [Appota SDK variables](VAR_EN.md)
- Support function: Every function will be accessed via AppotaGameSDKConfigure class (remember all function must be called after initing SDK)
	* +*showPaymentView*: Manualy show payment view from your game, can be implemented your button click
	* +*showLoginView*: Manualy show login view from your game, can be implemented your button click
	* +*showSwitchUserView*: Manualy show switchuser view from your game, can be implemented your button click	
	* *showPaymentButton, hidePaymentButton*: Show and hide floating button (like headchat) of AppotaSDK in your game
	* *setPaymentState*: Set alternative payment state before you showPaymentView, so you can handle more user info (server name, game status, …) in your IPN
	* +*sharedGameConfig*: Singleton shared instance of AppotaGameSDKConfigure
	* +(NSDictionary): getUserInfo* Return userinfo (acces_token, username, email, …) in NSDictionary
	* +(NSString): getUserName return username
	* +(NSString): getUserId return userid
	* +(NSString): getAccessToken return access token	

## 5. Appota  SDK flow

![](docs/user_flow.png)

User login flow using Appota SDK

![](docs/payment_flow.png)

Payment flow using Appota SDK

For more detail about this flow, please refer to Wiki: https://github.com/appota/ios-game-sdk/wiki
