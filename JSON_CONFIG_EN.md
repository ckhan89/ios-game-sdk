#Config.json#

Appota Game SDK is using one JSON configuration file as a flexible method for developers. 
With this method, you can setup many options for login and payment integration. 
For anyone who want to use this method, Appota provides a tool - ConfigJSON Generator to generate JSON configuration file.

###How to use ConfigJSON Generator:###

- Go to URL: [https://developer.appota.com/sdktool.php](https://developer.appota.com/sdktool.php)

- Tick on needed options.

- Click Generate button to generate JSON code.

<hr/>

###1. Application Options###

**Check version update**

Check version updates when login game and force application to update when have new version.

**Game currency**

Virtual currency in game, you can use text or image (upload required).

###2. Login Options###

**Appota User**

Allow to use Appota account to login.

**Social User**

Allow to use Facebook, Twitter, Google account to login.

**Fast Login**

Allow to use Device ID to login.

###3. Payment Options###

**SMS**

Allow to use SMS payment method. Tick on to select face values and conversion virtual currency. 

**Card**

Allow to use Card payment method. Tick on to select face values and conversion virtual currency.

**Paypal**

Allow to use Paypal payment method. Input amount money (USD) and conversion virtual currency. 

**Bank**

Allow to use Internet Banking payment method. Input amount money (VND) and conversion virtual currency. 

**Google Play Payment hoặc Apple Payment**

Allow to integrate Google Payment or Apple Payment into your application (depends on your application is Android or iOS platform).

Input below information:

- ProductID: IAP item code provided by Appota.
- Price: Amount money (USD)
- Name: Item name
- Game Currency: Virtual currency

###4 - Sample JSON###

Use these options:

![](json_sample.png)

Click Generate button will show this JSON code:

``` json
{"checkUpdate":true,"gameCurrency":{"type":"STRING","data":"VCOIN"},"loginMethods":["LOGIN_APPOTA",
"LOGIN_SOCIAL","LOGIN_FAST"],"paymentMethods":[{"method":"PAYMENT_SMS","options":[{"currency":"VND",
"country":"VN","amounts":[{"amount":500,"gameCurrency":5},{"amount":1000,"gameCurrency":10}]}]},
{"method":"PAYMENT_CARD","options":[{"currency":"VND","country":"VN","amounts":[{"amount":300000,
"gameCurrency":3000}]}]},{"method":"PAYMENT_PAYPAL","currency":"USD","options":[{"country":"VN",
"amounts":[{"amount":10,"gameCurrency":100}]}]},{"method":"PAYMENT_INTERNET_BANKING",
"options":[{"currency":"VND","country":"VN","amounts":[{"amount":10000,"gameCurrency":100}]}]},
{"method":"PAYMENT_GOOGLE_PLAY","items":[{"productid":"com.appota.sample.pack1","price":"10",
"name":"100 Coin","gameCurrency":100},{"productid":"com.appota.sample.pack2","price":"20",
"name":"200 Coin","gameCurrency":200}]}]}
```
