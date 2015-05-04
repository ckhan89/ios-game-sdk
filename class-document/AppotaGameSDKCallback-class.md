AppotaGameSDKCallback
===========

## Login callback function
<a name = "login-function"> </a>
** Login succeed **   

```
@required
- (void) didLoginSuccess:(AppotaUserLoginResult*) userLoginResult;

```
Callback after login success

|Parameter|Description|  
|-------|-----------|  
|userLoginResult|`userLoginResult` is `AppotaUserLoginResult` of user information used for [Appota Appota user confirmation](https://github.com/appota/ios-game-sdk/wiki/Integrate-user-system)|


-----

** Login error **   

```
@optional
- (void) didLoginErrorWithMessage:(NSString *)message withError:(NSError *)error;
```

Callback after login error

|Parameter|Description|  
|-------|-----------|  
|message|Login error message in string|
|error|NSError for login error|

-----
** Log out **   

```
@required
- (void) didLogOut:(NSString*) userName;

```
Callback after logout  

-----
** Close login view **   

```
@optional
- (void) didCloseLoginView;
```

Callback after close login view  

-----

## Payment callback function
<a name="payment-function"> </a>

** Payment succeed **   

````
@required
- (void) didPaymentSuccessWithResult:(AppotaPaymentResult*) paymentResult withPackage:(NSString *) packageID;
````

Callback after payment success

|Parameter|Description|  
|-------|-----------|  
|paymentResult|[AppotaPaymentResult](#appota-paymentresult-class) is result of successful payment|
|package|[AppotaPaymentPackage](AppotaPaymentPackage-class.md) contains information of the payment is bought.|

----
** Get payment state **   

```
@required
- (NSString*) getPaymentStateWithPackageID:(NSString *) packageID;

```

Get payment State depend on payment package

-----
** Payment error **

```
@required
- (void) didPaymentErrorWithMessage:(NSString *)message withError:(NSError *)error;
```
Callback after payment error

|Parameter|Description|  
|-------|-----------|  
|message|Payment error message in string|
|error|NSError for payment error|
