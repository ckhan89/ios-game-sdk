ChangeLog
=====

## 1. SDK


## 2. Server

- Add `revenue` parameter in IPN callback to measure revenue of current payment method type `CARD`, `BANK`, ...
- Reimplement your hash checking function to add `revenue` parameter (it will be add in `a-z` order)

