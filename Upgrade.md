Upgrade document
=======
This document gives instructions to upgrade from **AppotaGameSDK v3** to **AppotaGameSDK v4**

## 1. Configuration

### 1.1 SDK file requires

|Files|SDK3|SDK4|
|-----|----|----|
|AppotaSDK|AppotaBundle.bundle, AppotaSDK.framework|AppotaBundle.bundle, AppotaSDK.framework|
|FacebookSDK|FacebookSDK.framework|FBSDKCoreKit.framework  FBSDKLoginKit.framework FBSDKShareKit.framework|

### 1.2 Plist configurations

|Keys|SDK3|SDK4|
|----|----|----|
|`AppotaAPIKey`|NO|YES|
|`FacebookAppID`|YES|YES|
|`GOOGLE_CLIENT_ID`|YES|YES|
|`GOOGLE_CLIENT_SECRET`|YES|YES, in case client secret's not provided please leave `GOOGLE_CLIENT_SECRET` field blank|
|`TWITTER_CONSUMER_KEY`|YES|YES|
|`TWITTER_CONSUMER_SECRET`|YES|YES|
|URL schemes: `fbAppID`|YES|YES|
|URL schemes: `appotaCLIENT_ID`|YES|NO|

### 1.3 Server payment config file
|SDK3|SDK4|
|----|----|
|Use tool on https://developer.appota.com/sdktool.php and develop will host the json generated file|Payment config will be confgiure on https://developer.appota.com (ask supporter for more detail)|

### 1.4 Framework required
- SDK3 frameworks required  
 `AppotaSDK, QuaztCore, CoreText, StoreKit, AudioToolBox, MobileCoreServices, AVFoudation, CoreVideo, MessageUI, Security, SystemConfiguration, CFNetwork, OpenGLES, CoreMedia, libxml2.dylib, libsqlite3.dylib`
- SDK4 frameworks frequired
	- StoreKit.framework
	- Accounts.framework
	- Social.framework
	- Twitter.framework
	- ImageIO.framework
	- CoreTelephony.framework
	- AdSupport.framework
	- SystemConfiguration.framework
	- MessageUI.framework
	- CoreMotion.framework
	- Security.framework
	- WebKit.framework

## 2. Function 

|SDK3|SDK4|Change|
|-----|-----|-----|
|`configureWithClientID:withClientSecret:withInAppAPIKey:withState:withNoticeUrl:withConfigUrl`|`configure`|Change configure function|
||`SetAutoShowLoginDialog`|Auto show login dialog at SDK init|
|`setPaymentState`|`GetPaymentState(string packageID)`|Change machenism implement `GetPaymentState(String)` callback|
|`getUserInfo`|`getUserInfo`|Return [`AppotaUserLoginResult`](https://github.com/appota/ios-game-sdk/blob/master/class-document/AppotaUserLoginResult-class.md)|
|`showPaymentButton`, `hidePaymentButton`|`setSDKButtonVisibility(BOOL)`|call `setSDKButtonVisibility(BOOL)` true or false to hide or show floating button|
|`showPaymentView`|`showPaymentView`, `showPaymentViewWithPackageID(String)`|Change to `showPaymentView` and `showPaymentViewWithPackageID(String)`|
|`didFinishLogin:(NSDictionary *)`|`didLoginSuccess:(AppotaUserLoginResult*)`|Callback changed|
||`didCloseLoginView`|Callback changed|
|`didFinishPaymentWithDictionary:(NSDictionary*) withState:(AppotaPaymentState) withError:(NSError*)`|`didPaymentSuccessWithResult:(AppotaPaymentResult*)withPackage:(NSString *)`|Callback change return result [`AppotaPaymentResult`](https://github.com/appota/ios-game-sdk/blob/master/class-document/AppotaPaymentResult-class.md)|

## 3. Server IPN changes
- Add `revenue` parameter in IPN callback to measure revenue of current payment method type `CARD`, `BANK`, ...
- Reimplement your hash checking function to add `revenue` parameter (it will be add in `a-z` order)
- For detail please read wiki about IPN for each payment method [https://github.com/appota/android-game-sdk/wiki/instant-payment-notification](https://github.com/appota/android-game-sdk/wiki/instant-payment-notification)