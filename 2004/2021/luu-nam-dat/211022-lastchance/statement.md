---
title: "Kiểm tra 20'"
author: "stdio / 1s / 256MB"
date: "Oct/22/2021"
output: 
  pdf_document: 
    latex_engine: xelatex
---

## Conditions

Thời gian kiểm tra là 20 phút, bắt đầu từ thời điểm sau 5 phút kể từ khi phát đề. Trong thời gian làm bài giám thị không giải thích gì thêm.

Em có 5 lượt nộp bài. Do chưa có server chấm, em hãy nộp bài qua messenger, tên bài nộp phải là "**work.cpp**". Thời gian từ lúc anh nhận được bài cho đến lúc anh gửi feedback sẽ được bù giờ.

Nếu bài làm bị kết quả sai, feedback sẽ đi kèm với test đầu tiên mà bài nộp bị sai và thời gian mà em đã sử dụng.

Nếu bài làm đúng hết mọi test, feedback sẽ là "**AC**" và bài kiểm tra kết thúc.

## Statement

Cho một dãy $A$ gồm $N$ phần tử nguyên $A_{1}, A_{2},... A_{N}$.

Cho một điểm $X$ nguyên dương, $1 \leq X < N$.

Gọi trung bình cộng của $A_{1}, A_{2},... A_{X}$ là $L$  
Gọi trung bình cộng của $A_{X+1}, A_{X+2},... A_{N}$ là $R$

So sánh $L$ với $R$

## Input

Dòng 1: Một số nguyên dương $N$, $2 \leq N \leq 10^6$

Dòng 2: $N$ số nguyên $A_{i}$, $|A_{i}| \leq 10^3$

Dòng 3: Một số nguyên $X$, $1 \leq X < N$

## Output

In ra "$L > R$" (không có ngoặc kép) nếu $L > R$

In ra "$L < R$" (không có ngoặc kép) nếu $L < R$

In ra "$L = R$" (không có ngoặc kép) nếu $L = R$

## Constraints

25% số test có $N \leq 10, |A_{i}| \leq 10$  
25% số test có $N \leq 1000$  
50% còn lại không có điều kiện gì thêm  

## Sample Input 1

```
5
1 3 6 5 4
3
```

## Sample Output 1

```
L < R
```

## Explanation 1

$L = (A_{1} + A_{2} + A_{3})/3 = 10/3 \approx 3.3$  
$R = (A_{4} + A_{5})/2 = 4.5$

Vậy in ra $L < R$

## Sample Input 2

```
8
8 4 5 7 2 6 9 7
1
```

## Sample Output 2

```
L > R
```

## Explanation 2

$L = A_{1}/1 = 8$  
$R = (\sum_{i=2}^{8} A_{i})/(8-2+1) = 40/7 \approx 5.7$

Vậy in ra $L > R$

## Sample Input 3

```
4
2 4 1 5
2
```

## Sample Output 3

```
L = R
```

## Explanation 3

$L = (A_{1} + A_{2})/2 = 3$
$R = (A_{3} + A_{4})/2 = 3$

Vậy in ra $L = R$
