AppotaGameSDK  
===========
`AppotaGameSDK` is the one and only class used to manage every action in `AppotaSDK`.


Inherits from:	`NSObject`
Declared in:	[AppotaGameSDK.h](./AppotaGameSDK.h)

Properties <a name="AppotaGameSDK-properties"> </a>
======

> `autoShowPaymentButton`  
Flag to show Appota floating button
```c
@property (readwrite) autoShowPaymentButton
```
Default value : `YES`  
Declared in:	[AppotaGameSDK.h](./AppotaGameSDK.h)     

--
 
> `autoShowLoginDialog`  <a name="properties-login-feature"></a>  
Flag to auto show Appota Login View
```c
@property (readwrite) autoShowLoginDialog
```
Default value : `YES`  
Declared in:	[AppotaGameSDK.h](./AppotaGameSDK.h)

--

Class method <a name="appotagamesdk-classmethod"> </a>
====

Class method will support 4 features:

**Init feature**<a name="class-method-init-feature"></a>  
All init function will be called in `Appdelegate.m`

> `configure`  
Appota SDK init must be called once when application start

```c
	[AppotaGameSDK configure];		
```

----

> Set callback for `AppotaGameSDK`
```c
[AppotaGameSDK sharedInstance].delegate = self;
```

> `handleOpenURL:sourceApplication:annotation:` 
Will be called in `AppDelegate.m` handle openURL function

```c

[AppotaGameSDK handleOpenURL:url
	     sourceApplication:sourceApplication
            annotation:annotation];
            
```

**Login feature**<a name="class-method-login-feature"></a>  

>`showLoginView`

```c

[AppotaGameSDK showLoginView]

```

-----

**Payment feature**<a name="class-method-payment-feature"></a>   

>`showPaymentView`

```c

[AppotaGameSDK showPaymentView]

```

-----


>`showPaymentViewWithPackage:`

```c

[AppotaGameSDK showPaymentViewWithPackage:(AppotaPaymentPackage*) package]

```
|Parameter|Description|  
|-------|-----------|  
|package|AppotaPaymentPackage contains price, package id of game package about to be bought|

----

>`setPaymentState:` <a name = "AppotaGameSDK-setpaymentstate"> </a>
```
[][AppotaGameSDK shareConfig] setPaymentState:(NSString*) paymentState];
```
|Parameter|Description|  
|-------|-----------|  
|paymentState|String to define correct character, server, ... to procceed correct payment payment package|

**Tracking method**<a name="class-tracking-method"> </a>

```c

+ (void) sendEventWithCategory:(NSString*) categoryName
                      withEventAction:(NSString*) action
		                      withLabel:(NSString*) label
		                      withValue:(NSNumber*) value

```
|Parameter|Required|Description|  
|-------|-----------|----------|
|categoryName|YES|The event category|
|action|YES|The event action|
|label|NO|The event action|
|value|NO|The event value|

```c

+ (void) sendViewWithName:(NSString*) viewName

```
|Parameter|Required|Description|  
|-------|-----------|----------|
|viewName|YES|NSString view name|

**Push notification method**<a name="push-notification-method"> </a>

>Register push notification
```c
+ (void) registerPushNotificationWithGroupName:(NSString*) groupName;
```
|Parameter|Description|  
|-------|-----------|  
|groupName|Push group name is defined by you and will be recorded on `Appota Push Notification` system. 
(`"all"` for default)|



Register push device token data with Appota system (should be called in `application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)devTokenData` in `AppDelegate.m`)

```c
+ (NSString*) configurePushNotificationWithTokenData:(NSData*) deviceTokenData
```

**Other method**<a name="class-method-other-method"> </a>
>`showProfileView`  

```c

[AppotaGameSDK showProfileView]

```
Show user profile

-----

>`showTransactionHistory`  

```c

[AppotaGameSDK showTransactionHistory]

```
Show user transction history

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
