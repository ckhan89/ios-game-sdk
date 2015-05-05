AppotaGameSDK  
===========
`AppotaGameSDK` is the one and only class used to manage every action in `AppotaSDK`.

Class method will support 4 features:

### 1. Init function <a name="init-function"></a>  
All init function will be called in `Appdelegate.m`
 

```
	[AppotaGameSDK configure];		
```

Appota SDK init (configure) must be called once when application start

----


```
[AppotaGameSDK sharedInstance].delegate = self;
```
Set callback for `AppotaGameSDK`

----

`handleOpenURL:sourceApplication:annotation:` Will be called in `AppDelegate.m` handle openURL function

```

[AppotaGameSDK handleOpenURL:url
	     sourceApplication:sourceApplication
            annotation:annotation];
            
```

----

```

```

----
### 2. User function <a name = "user-function"> </a>

* `ShowLoginView()`: Show login view function (when user's not logged in)
* `Logout()`: Logout function
* `SwitchAccount()`: Call this function when you want to switch logged in user to other Appota User. Remember to check callback after switching successful (it'll be called in `OnLoginSuccess()` again)
* `ShowUserInfo()`: This function will show user profile view  
* `IsUserLogin()`: This function will return user logged in state
* `GetAppotaSession()`: Return `AppotaSession` if logged in
* `SetCharacter(string name, string server, string characterID)`: Set character function to support character management on web

### 3. Payment functions: <a name = "payment-function"> </a>

* `MakePayment()`: Show payment view with default list payment packages
* `MakePayment(string packageID)`: Show a specific package depends on your in-game mechanism

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
