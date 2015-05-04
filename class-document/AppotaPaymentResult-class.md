AppotaPaymentResult 
======
Payment result class return in `didPaymentSucceed` callback

** Get money amount **  

```
- (float) getAmountPaymentResult;
```
Money amount for successful transaction

----
** Get package id of the payment ** 

```
- (NSString*) packageID;
```

-----

** Get appota transaction id **

```
- (NSString *)transactionID;
```
----

** Get payment type ** 

```
-(NSString *)type;
```

Payment type of the transaction (`CARD`, `BANK`, `SMS`, `APPLE`)

----

** Get currency of payment **  

```
-(NSString *)currency;
```
`VND`, `USD`, ...

---  

** Get time of payment **  

```
-(NSString *)time;
```

-----
** Only for Apple payment - get product id**

```
-(NSString *)appleProductID;

```
