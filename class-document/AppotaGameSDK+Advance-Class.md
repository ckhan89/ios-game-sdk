------------
**Get list payment Object**

```
+ (NSArray*) getListPaymentObject;
```
-----------
 **invite facebook friends**
 
```
+ (void)inviteFacebookFriendsWithCompleteBlock:(AppotaSDKDictionaryBlock) resultBlock
                                 andErorrBlock:(AppotaSDKErrorBlock) errorBlock;
```

--------------------
**show facebook login**

- If use delegate:

```
+ (void) showFacebookLogin;
```
- If use block:

```
+ (void) showFacebookLoginWithCompleteBlock:(AppotaSDKUserLoginResultObjectBlock) completeBlock
                              andErrorBlock:(AppotaSDKErrorBlock) errorBlock
```
- use block with custom facebook login permissions:

```
+ (void) showFacebookLoginWithPermissions:(NSArray *)permissions
                     andWithCompleteBlock:(AppotaSDKUserLoginResultObjectBlock) completeBlock
                            andErrorBlock:(AppotaSDKErrorBlock) errorBlock
```
---------------
**show google login**

- If use delegate:

 ```
+ (void) showGoogleLogin;
```
- if use block:

 ```
+ (void) showGoogleLoginWithCompleteBlock:(AppotaSDKUserLoginResultObjectBlock) completeBlock
                            andErrorBlock:(AppotaSDKErrorBlock) errorBlock
```

----------------
 **show Twitter login**
 
 - If use delegate:
 
 ```
+ (void) showTwitterLogin;
```

- If use block:

 ```
+ (void) showTwitterLoginWithCompleteBlock:(AppotaSDKUserLoginResultObjectBlock) completeBlock
                             andErrorBlock:(AppotaSDKErrorBlock) errorBlock
```