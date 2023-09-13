## 說明 ##
<b>從N筆航班資料中排出最佳航班(`0<N<=1000`)</b>  
輸入共N筆航班資料，每筆包括來回小時數(`0<=hour<=50`)、機票價錢(`以千為單位,0<=price<=100`)及對航空的好感度(`0<=value<=10`)後，求出它們的性價比<br>
性價比公式為 $100*(1/(來回小時數*機票價錢)+(航空好感度/10000))$ <br>
印出性價比最高之航班編號，若有有同高者則皆印出<br>

## Input Format ##
第一行為一整數N  
第二行至第N-1行為航班資料，每個數字皆為整數，以空白間隔:來回小時數 機票價格 航空好感度

## Output Format ##

性價比最高之航班編號<br>

## Sample Input ##
```
3
9 64 7 
11 52 4 
7 80 10 
```
## Sample Output ##
```
1
```
