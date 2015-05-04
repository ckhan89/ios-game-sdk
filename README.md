#Version 4 of the Appta Game SDK for iOS

<b> Version 4 of the Appota Game for iOS has been published in this reposity and in Developer Preview. Version 3 will continue to be available in our [appota-ios-game-sdk3](https://github.com/appota/ios-game-sdk3) repository. If you upgrade from SDK3 to SDK4 please check our [Upgrade Document](Upgrade.md) </b>   

##Highlights

* **Appota Login** Support multiple login methods Appota, Google, Facebook, Twitter, Guest.
* **Appota Payment** Support mutiple payment methos SMS, Card, E-Bank, Apple Payment.
* **Appota Analytics** A service for collecting, visualizing, and understanding user and app data (session, active, error log, ...) at scale.  
* **Push Notification** on multiple platforms (iOS, Android, WP).

## Overview
1. [Integrate SDK](#head1-integrate-sdk)
2. [Client API](#head1-client-api)
    * [Init and setup SDK](#head2-init-sdk)
    * [User function](#head2-user-function)
    * [Payment function](#head2-payment-function)
    * [Analytic function](#head2-analytic-function)
    * [Push notification function](#head2-push-notification-function)
3. [Class document](#head1-class-document)
4. [FAQ and Glossary](#head1-faq)

##1. Integrate SDK <a name = "head1-integrate-sdk"> </a>
The [sample apps](Sample/) are standalone projects that are already set up for you. You can also integrate the SDK for iOS with an existing application.

###1.1. Prerequisites <a name = "head2-prerequisites">  </a>
To get started with the Appota Game SDK for iOS, you can set up the SDK and start building a new project, or you can integrate the SDK in an existing project. You can also run the samples to get a sense of how the SDK works.

The Appota Game SDK for iOS supports the following versions of software:

* Xcode 6 and later
* iOS 5.1.1 and later

###1.2. Obtain app api key and client key <a name="head2-obtain-app-api-key-and-client-key"> </a>
* Retreive Appota app information `ClientKey`, `APIKey`, `ClientSecret` from app dashboard. <a name="head3-appota-appid"> </a> If you haven't already registered your app with Appota by creating a Appota app, you should [create a new app](https://developer.appota.com/manage-content.html) then retreive app information from developer dashboard.  
* Retreive Facebook Application ID.   <a name="head3-facebook-appid"> </a>  
[Detail about how to create ,retreive and setup Facebook app info for iOS](https://developers.facebook.com/docs/ios/getting-started). If you can not access Facebook Developer page, please contact our support (sale@appota.com) to get the application id.  
* Retreive Google Client ID and Client Secret. <a name="head3-google-appid"> </a>   
Create new project from [https://console.developers.google.com](https://console.developers.google.com), in `API & Auth-Credentials` add iOS support and get ClientID and ClientSecret. If you can not access Google Developer page, please contact our support (sale@appota.com) to get the application id and secret.


###1.3. Configure your XCode Project <a name="head2-configure-your-xcode-project"> </a>

####1.3.1. Add the Appota iOS SDK
 Open [ios-game-sdk/Frameworks](Frameworks/) and add [AppotaSDK.framework](Frameworks/AppotaSDK.framework), [AppotaBundle.bundle](Frameworks/AppotaBundle.bundle), [Facebook.framework](Frameworks/Facebook.framework) to your project. (Remember to choose **Create groups for any added folders** and select **Copy items into destination group's folder (if needed)**)    
![](images/add_framework.gif)


####1.3.2. Add framework dependencies and setting
Select your project from the Project Navigator, and choose your application's target.  
Open **Build Phases** tab, within **Link Binary with Libraries**, add the following frameworks:  

- `StoreKit.framework`  
- `Accounts.framework`  
- `Social.framework`  
- `Twitter.framework`
- `Adsupport.framework`
- `ImageIO.framework`

Open **Build Settings**, find **Other Linker Flags**, add `-ObjC` then check if **Link Frameworks Automatically**, **Enable Modules (C and Objectivce-C))** are set to `YES`


####1.3.3. Configure the Info `.plist`

- Open Info `plist` section add `FacebookAppID` key with value is your [Facebook AppID](#head3-facebook-appid).
- Open Info `plist` section add `GOOGLE_CLIENT_ID` and `GOOGLE_CLIENT_SECRET` key with value is your [Google Client Id and Sceret](#head3-google-appid).
- Open Info `plist` section add `AppotaAPIKey` key with value is your [Appota APIKey](#head3-appota-appid).
- Add url schemes:
	- Identifier Appota, URL Schemes: `appotaYOUR_CLIENT_KEY`, [Appota Client Key](#head3-appota-appid) can be retreived from developer portal
	- Identifier Facebook, URL Schemes: `fbYOUR_FACEOOK_APP_ID`, [Facebook AppID](#head3-facebook-appid) can be retreived from Facebook App Dashboard

The finished `.plist` should look like this or check the [sample apps](Sample/AppotaGameSDKV4Test/AppotaGameSDKV4Test/Info.plist) for plist configuration   

![](images/plist.png =500x250)

###1.4. Upgrade SDK3 to SDK4
There are some API and flow change in SDK4 with SDK3. Please review our [Upgrade Document](Upgrade.md) to upgrade your app


##2. Client API <a name="head1-client-api"> </a>

###2.1 Init and setup SDK <a name = "head2-init-sdk"> </a>
Related class and function:  
[AppotaGameSDK clas - init function](class-documents/AppotaGameSDK-class)  
Appota SDK init must be called once when application start via [AppotaGameSDK](SDK) class call `[AppotaGameSDK configure]` so most of the time it will be placed in `AppDelegate's` method `application:didFinishLaunchingWithOptions:`  
In `AppDelegate.h` add import `#import <AppotaSDK/AppotaSDK.h>` use `AppDelegate` as protocol:

```
@interface AppDelegate : UIResponder <UIApplicationDelegate, AppotaGameSDKCallback>

```

In `AppDelegate.m`:

```

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{		
	// Your code is placed above
	[AppotaGameSDK configure];
 	[AppotaGameSDK sharedInstance].delegate = self;	
 }

```

** Add Appota handle open URL in function**  `application:openURL:sourceApplication:annotation:`

```
- (BOOL) application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    return [AppotaGameSDK handleOpenURL:url sourceApplication:sourceApplication annotation:annotation];
}

```
There are 2 functions to control SDK flows:

- `setKeepLoginSession:(BOOL)` <a name="set-keep-login-session"> </a> this function will control the Appota Login Session will be kept or deleted at app lauching (when deleted user has to login again when app start).   
**Note** If this function is not called, login session will be kept by default.
- `setAutoShowLoginDialog:(BOOL)` <a name="set-auto-show-login-dialog"> </a> this function will control the Appota Login View will be automatically show at app lauching (when user's not logged in) or you have to call [showLoginView](#show-login-view) function to show the LoginView. 
**Note** If this function is not called, login view will automatically show at app lauching (when user's not logged in)

###2.2. User function <a name="head2-user-function"> </a>
Related class and function:

- [AppotaGameSDK- user function](class-document/AppotaGameSDK-class.html#init-function)
- [AppotaUserLoginResult](class-document/AppotaUserLoginResult-class.html)
- [AppotaGameSDKCallback - user function](class-document/AppotaGameSDKCallback-class.html/user-function)


Once you've implemented init SDK function, start using login features.

####2.2.1. Show login view <a name = "head2-show-login-view"> </a>
As mentioned above login dialog flow can be controled by function [setAutoShowLoginDialog:](#set-auto-show-login-dialog). Automatically show login view at app launching or manual call `showLoginView` when you need:  

```
[AppotaGameSDK showLoginView];

```
<a name="show-login-view"> </a>
Appota Login Dialog contains 5 authorization methods: **Facebook**, **Google**, **Twitter**, **Appota User** and **Quick Login**. (For **Quick Login** users have to update their email and password to proceed payment)

![](images/login_dialog.png)

Follow this mechanism for login function, please implement [`didLoginSuccess`](#did-login-succeed) callback to authenticate your in-game user.
![Appota Login Mechanism](images/login_user_sequence.png)

####2.2.2. User and SDK flow function <a name ="head2-user-flow-sdk-function"> </a>

** Check user login **   
This function return user login status

```
[AppotaGameSDK checkUserLogin];
```

---------

** Switch account **   

Call this function when user logged in will show a login view and allow to login other account. When switch account succeed `didLoginSuccess` callback will be called again, so please logout your game account and reauthenticate with new switched account.

```
[AppotaGameSDK switchAccount]
```
![Appota Switch Account Mechanism](images/switch_user_sequence.png)

Follow this mechanism for switch account function, please implement [`didLoginSuccess`](#did-login-succeed) to re-authenticate your in-game user with new switched user.

----

** Logout **  
When logout succeed `didLogout:` callback will be called, please logout your game account and call `showLoginView` to login other account

```
[AppotaGameSDK logOut]
```

----

** Get userinfo **  
Return user info (`AppotaUserLoginResult` object) when user logged in. 
```
[AppotaGameSDK getUserInfo]
```

####2.2.3. Handle authentication callbacks <a name = "login-handle-login-response"> </a>

AppotaSDK provide 4 callbacks delegate for login defined in [`AppotaGameSDKCallback`](AppotaGameSDKCallback-class), please implement these functions to `Appdelegate.m`

----
**Login succeed callback**   <a name="did-login-succeed"> </a>  
Retreive Appota user info from `AppotaUserLoginResult` then post to your server to verify and create game user. For more detail about user integration on server - [User Integration](https://github.com/appota/ios-game-sdk/wiki/Integrate-user-system) and above flow diagrams.

**Note** Remember verify Appota UserID, UserName and Access token on your server before procceeding game user integration

```
@required
- (void) didLoginSuccess:(AppotaUserLoginResult*) userLoginResult

```

|Parameter|Description|  
|-------|-----------|  
|userLoginResult|`userLoginResult` is [AppotaUserLoginResult](class-document/AppotaUserLoginResult-class.html) object of user information (`username`, `user_id`, `access_token`)|

----
**Login fail callback**  
Callback when login have problems

```
@optional
- (void) didLoginErrorWithMessage:(NSString *)message withError:(NSError *)error;
```

----
**Logout callback**  
Callback after user logout with user name, please logout your game account and call `showLoginView` to login other account

```
@required
- (void) didLogout:(NSString*) userName

```

----
**Close login view callback**  
Callback when user close login view at app launching

```
@optional
- (void) didCloseLoginView;
```

###2.2. Payment function <a name="head2-payment-function"> </a>

Related class and function:

- [AppotaGameSDK - payment function](class-document/AppotaGameSDK-class.html#payment-function)
- [AppotaGameSDKCallback](class-document/AppotaGameSDKCallback-class.html#payment-function)
- [AppotaPaymentResult](class-documents/AppotaUserLoginResult-class.html)

Before using AppotaSDK payment function you should understand Appota Payment mechanism and configuration. Please study Appota payment mechanism at [Appota Payment Document](https://github.com/appota/ios-game-sdk/wiki/Passive-Confirmation-via-IPN) and payment configuration at [Appota Developer Portal](https://developer.appota.com/manage-content.html).

####2.2.1. Show payment view <a name="head3-show-payment-view"> </a>

---------
You have some methods to show payment view. Each payment view represents one or list of payment package. Each package contains information of game coin amount or in-game package. Find out more about payment package at [Appota Payment Package](#head1-faq)

** Show default list payment view **

You can show payment view with default list payment packages (which is configured on [Appota Developer Portal]()). This payment view list can show from SDK floating button also.

```
[AppotaGameSDK showPaymentView]
```
![](images/list_item.gif)

----

** Show payment view for a specific package **

You can show a specific package depends on your in-game mechanism

```
[AppotaGameSDK showPaymentViewWithPackageID:];
```

![](images/one_item.gif)


####2.2.2 Handle payment callback <a name="head3-handle-payment-callback"> </a>

---------
Every payment success will callback in `AppotaGameSDK` delegate (setup in [init function](#head2-init-sdk)). The callback functions should be in `AppDelegate.m`
There are 2 `@required` callback function defined in [AppotaGameSDKCallback](AppotaGameSDKCallback-class)

** Callback after a successful payment **

Depends on your payment machenism, proceed payment verification or alert payment success for user

```
@required
- (void) didPaymentSuccessWithResult:(AppotaPaymentResult*) paymentResult withPackage:(NSString *) packageID;
```

|Parameter|Description|  
|-------|-----------|  
|`paymentResult`|`paymentResult` is [AppotaPaymentResult](class-documents/AppotaUserLoginResult-class) object of payment information (transaction id, amount, ...)|
|`packageID`|`packageID` is id of the package has been bought, `packageID` is defined during payment configuration process|

----
** Callback for payment state **

**PAYMENT_STATE** is required for our SDK to make correct payment with package. Depends on your payment package implement this function and return a correct payment state. [Detail about payment state]().  
For example packageID: com.gold.package1 - (defined in your developer page) corresponds with a package of 1000 gold and current game user is X in server Y. Then payment state can be constructed : 1000_gold_X_Y (depends on your format).
	
```
@required
-(NSString*) getPaymentStateWithPackageID:(NSString*) packageID;

```
|Parameter|Description|  
|-------|-----------|  
|`packageID`|`packageID` is id of the package has been bought, `packageID` is defined during payment configuration process|

** YOU HAVE TO IMPLEMENT THIS FUNCTION TO ENSURE GOLD CHARING CORRECTLY **  

###2.3. Analytic function <a name="head2-analytic-function"> </a>
Related class:  
- [AppotaGameSDK- tracking function](class-document/AppotaGameSDK-class.html#tracking-function)

Appota SDK support calling track for view and event. These track information is very useful for game advertisement and tracking.

** View tracking function **  
When enter a view send view for tracking

```
+ (void) sendViewWithName:(NSString*) viewName;
```

** Event tracking function **  
When user perform an event send event for tracking

```
+ (void) sendEventWithCategory:withEventAction:withLabel:withValue:;

```
Define `category`, `action`, `label`, `value` detail of the action


###2.3. Push notification function <a name="head2-push-notification-function"> </a>
Related class:  
- [AppotaGameSDK - push notification function](class-document/AppotaGameSDK-class.html#push-notification-function)

** Register push notification with groupname **  
Register push notification (currenly only support iOS). Use group name to choose user group for easy pushing (for example only push user in server 1 then groupName = "server 1").

```
+ (void) registerPushNotificationWithGroupName:;
```
Call this function when you want to register notification

** Upload device token data **

```
+ (NSString*) configurePushNotificationWithTokenData:;
```
Call this function in `AppDelegate.m`, `application:didRegisterForRemoteNotificationsWithDeviceToken:` to register device token data for push notification


##3. Class Document <a name="head1-class-document"> </a>
- [AppotaGameSDK](class-document/AppotaGameSDK-class.html)
- [AppotaGameSDKCallback](class-document/AppotaGameSDKCallback-class.html)
- [AppotaUserLoginResult](class-document/AppotaUserLoginResult-class.html)
- [AppotaPaymentResult](class-document/AppotaPaymentResult-class.html)

##4. FAQ and Glossary <a name="head1-faq"></a>
- `IPN` is payment machenism used by Appota System to increase gold for game user. Detail in [IPN](https://github.com/appota/ios-game-sdk/wiki/Passive-Confirmation-via-IPN)
- `PackageID` each payment package in game should be defined along with a package ID (provided by SDKTool) to identify package.
- `PaymentState` payment state must be implemented in `GetPaymentState` function. And use `PackageID` and game server information to build up `PaymentState`.   
For example packageID: `com.gold.package1` - (defined in integration process) corresponds with a package of 1000 gold and current game user is X in server Y. Then payment state can be constructed : com.gold.package1_1000_gold_X_Y (depends on your format).