AppotaGameSDK  
===========
`AppotaGameSDK` is the one and only class used to manage every action in `AppotaSDK`.


Inherits from:	`NSObject`  
Declared in:	[AppotaGameSDK.h](../Frameworks/AppotaSDK.framework/Versions/A/Header/AppotaGameSDK.h)  

Init function <a name="init-function"> </a>
====

** Configure function **  

```
+ (void) configure;

```
Appota SDK configure must be called once when application start

----

** Delegate **  

Set delegate for `AppotaGameSDK` (Delegate definition will be in [AppotaGameSDKCallBack](../Frameworks/AppotaSDK.framework/Versions/A/Header/AppotaGameSDKCallBack.h))  

```
[AppotaGameSDK sharedInstance].delegate = self;
```
-----
** Open url function **

AppotaGameSDK handle open url has to be called in `AppDelegate.m` handle openURL function

```

[AppotaGameSDK handleOpenURL:url
	     sourceApplication:sourceApplication
            annotation:annotation];
            
```

User function <a name="user-function"> </a>
====

** Show login view **

```

+ (void) showLoginView;

```

----

** Check user login **

```
+ (BOOL) checkUserLogin;

```

---

** Switch account **

```
+ (void) switchAccount;
```

---
** Log out **

```
+ (void) logOut;
```

----
** Get user info **

```
+ (AppotaUserLoginResult *) getUserInfo;
```

Payment functionn <a name="payment-function"> </a>
=====

** Show payment view (all payment package will show) **

```

+ (void) showPaymentView;

```

-----


** Show payment view with one package **

```

+ (void) showPaymentViewWithPackage:(NSString *)packageID;

```
|Parameter|Description|  
|-------|-----------|  
|packageID|`packageID` each payment package in game should be defined along with a package ID (provided by SDKTool) to identify package.|


Tracking function <a name="tracking-function"> </a>
=====

** Send view **

```

+ (void) sendViewWithName:(NSString*) viewName

```

|Parameter|Required|Description|  
|-------|-----------|----------|
|viewName|YES|NSString view name|

----

** Send event **

```

+ (void) sendEventWithCategory:(NSString*) categoryName
                      withEventAction:(NSString*) action
		                      withLabel:(NSString*) label
		                      withValue:(NSNumber*) value

```

|Parameter|Required|Description|  
|-------|-----------|----------|
|categoryName|`YES`|The event category|
|action|`YES`|The event action|
|label|`NO`|The event action|
|value|`NO`|The event value|


Push notification function<a name="push-notification-function"> </a>
======

** Register push notification **   

```
+ (void) registerPushNotificationWithGroupName:(NSString*) groupName;
```

|Parameter|Description|  
|-------|-----------|  
|groupName|Push group name is defined by you and will be recorded on `Appota Push Notification` system. (`"all"` for default)|

-----

** Config push token **  
Config push device token data with Appota system (should be called in `application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)devTokenData` in `AppDelegate.m`)

```
+ (NSString*) configurePushNotificationWithTokenData:(NSData*) deviceTokenData
```

Other method <a name="class-method-other-method"> </a>
=======

** Show profile view ** 

```

+ (void) showProfileView;

```


-----

** Show transaction history **   

```

+(void)showTransactionHistory;

```

-----

> `setCharacterWithName:withServer:`
Function for support advance web-interface payment 
```c
+ (void) setCharacterWithName:(NSString*) name
					withServer:(NSString*) server
```
|Parameter|Description|  
|-------|-----------|  
|name|Charater in game name - please don't confuse it with AppotaID|
|server|Server name where character are in|
