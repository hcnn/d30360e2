# d30360e2
* Date difference in years according to the 30E2/360 daycount method
* Synonyms: 30E2/360, Eurobond basis model 2


## ISO 20022 -- A012

    "Method whereby interest is calculated based on a 30-day month and a 360-day year. Accrued interest to a value date on the last day of a month shall be the same as to the 30th calendar day of the same month, except for the last day of February whose day of the month value shall be adapted to the value of the first day of the interest period if the latter is higher and if the period is one of a regular schedule. This means that a 31st is assumed to be a 30th and the 28th Feb of a non-leap year is assumed to be equivalent to a 29th Feb when the first day of the interest period is a 29th, or to a 30th Feb when the first day of the interest period is a 30th or a 31st. The 29th Feb of a leap year is assumed to be equivalent to a 30th Feb when the first day of the interest period is a 30th or a 31st. Similarly, if the coupon period starts on the last day of February, it is assumed to produce only one day of interest in February as if it was starting on a 30th Feb when the end of the period is a 30th or a 31st, or two days of interest in February when the end of the period is a 29th, or 3 days of interest in February when it is the 28th Feb of a non-leap year and the end of the period is before the 29th."

[link](https://www.iso20022.org/15022/uhb/mt565-16-field-22f.htm)


### Installation
```
clib install hcnn/d30360e2
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/d30360e2": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/d30360e2/blob/master/test.c) and [demo.c](https://github.com/hcnn/d30360e2/blob/master/demo.c)

```
git clone git@github.com:hcnn/d30360e2.git
cd d30360e2
make deps
make validate
make showcase
```
