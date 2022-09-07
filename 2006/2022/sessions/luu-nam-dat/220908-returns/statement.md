---
title: "Bài tập làm quen"
author: "iluvgirlswithglasses"
date: "Sep-08-2022"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
fontsize: 12pt
---

Note: Các bài tập trong đây đều có test *rất nhỏ*. Làm bằng cách nào cũng AC nên cứ làm cho quen tay.

# Bài 1 - Tổng & Hiệu

Trong một ngày chả có gì làm, Edward bày ra cho mình một trò chơi: Cậu viết ra một dãy gồm $N$ số nguyên $A_{1}, A_{2}, A_{3},... A_{N}$. Sau đó, cậu tính tổng của các số $A_{1}, A_{3}, A_{5},... A_{2k+1}$ trừ cho tổng của các số $A_{2}, A_{4}, A_{6},.. A_{2k}$. Chơi một mình thì cũng chán, Edward muốn mời bạn chơi chung :)) nếu chậm hơn Edward thì là gà nhé!

### Input

Dòng 1: Một số nguyên dương $N$

Dòng 2: $N$ số $A_{1}, A_{2}, A_{3},... A_{N}$

### Output

**Tổng các phần tử chỉ có mục lẻ** trừ đi cho **Tổng các phần từ có chỉ mục chẵn**

### Sample Input

```
10
4 3 5 2 1 6 7 8 9 1
```

### Sample Output

```
6
```

### Giải thích

```
4 + 5 + 1 + 7 + 9 = 26
3 + 2 + 6 + 8 + 1 = 20
26 - 20 = 6
```

# Bài 2 - Hiệu & Tổng

Ein - con chó nuôi của Edward - đề xuất rằng trò chơi "Tổng & Hiệu" cần phải được làm mới cho đỡ chán. Cậu cũng viết ra một dãy gồm $N$ số nguyên $A_{1}, A_{2}, A_{3},... A_{N}$. Sau đó, cậu thách đấu Edward và **bạn** phải tính được hiệu giữa **Tổng các phần tử có giá trị lẻ** và **Tổng các phần tử có giá trị chẵn**. Trong đó, hiệu giữa hai số $a$ và $b$ là $c = |a-b|$. Ai không giải được là gà :))

Để không bị chê là gà, bạn hãy tự viết chương trình để giúp bản thân mình nhé!

### Input

Dòng 1: Một số nguyên dương $N$

Dòng 2: $N$ số $A_{1}, A_{2}, A_{3},... A_{N}$

### Output

Hiệu giữa **Tổng các phần tử có giá trị lẻ** và **Tổng các phần tử có giá trị chẵn**

### Sample Input

```
10
4 3 5 2 1 6 7 8 9 1
```

### Sample Output

```
6
```

### Giải thích

```
3 + 5 + 1 + 7 + 9 + 1 = 26
4 + 2 + 6 + 8 = 20
26 - 20 = 6
```

# Bài 3 - Chia bánh

Jet là thuyền trưởng của một chiếc thuyền có 5 người. Tiện đây thì ông mới luộc $S$ quả trứng. Ông chia cho 3 người đầu tiên một số lượng lần lượt là $a, b, c$ quả. Hỏi có bao nhiêu cách chia số quả trứng còn lại cho 2 người cuối cùng?

### Input

4 số nguyên $S, a, b, c$

$a+b+c \leq S$

### Output

Số cách chia cho 2 người còn lại

### Sample Input

```
14 3 3 4
```

## Sample Output

```
5
```

## Giải thích

Sau khi chia cho 3 người đầu tiên, Jet còn lại 4 quả trứng.

Gọi số trứng chia cho người thứ 4 và thứ 5 là $(x, y)$, có những cách chia như sau:

$(4, 0), (3, 1), (2, 2), (1, 3), (0, 4)$

# Bài 4 - Đổi múi giờ

Spike là một người có sở thích phiêu lưu bốn bể. Tuy nhiên, việc đi lại nhiều nơi trong một khoảng thời gian ngắn khiến anh khó kiểm soát được giờ giấc. Anh muốn có một chương trình có thể giúp mình đổi từ múi giờ này sang múi giờ khác.

### Input

Dòng 1: Gồm 3 số nguyên $H$, $M$ và $X$, cho biết ***giờ*** và ***phút*** hiện tại trong múi giờ $GMT+X$

Dòng 2: Một số nguyên $Q$ cho biết số truy vấn

$Q$ dòng tiếp theo: Dòng thứ $i$ bao gồm 1 số nguyên $Y_{i}$ là múi giờ cần đổi.

### Output

$Q$ dòng. Dòng thứ $i$ in ra ***giờ*** và ***phút*** khi đổi múi giờ từ $GMT+X$ sang $GMT+Y_{i}$

### Sample Input

```
11 40 +0
3
+8
-1
-12
```

### Sample Output

```
19 40
10 40
23 40
```

# Bài 5 - Mua sắm

Nhân dịp Valentine, Faye muốn tặng cho Spike một cái đồng hồ. Cô vào một shop có $N$ chiếc đồng hồ. Mỗi chiếc có giá tiền là $A_{i}$ và đánh giá của Faye dành cho nó là $V_{i}$. Biết **hiệu quả đầu tư** $= V_{i}/A_{i}$, hãy giúp Faye tìm ra chiếc đồng hồ đạt hiệu quả đầu tư cao nhất.

### Input

Dòng 1: Một số nguyên dương $N$

Dòng 2: $N$ số nguyên $A_{1}, A_{2},... A_{N}$

Dòng 3: $N$ só nguyên $V_{1}, V_{2},... V_{N}$

### Output

Số thứ tự của chiếc đồng hồ có **hiệu quả đầu tư** cao nhất

### Sample Input

```
4
2 4 3 5
4 6 7 11
```

### Sample Output

```
3
```

### Giải thích

Gọi $H$ là hiệu quả đầu tư. Ta có: 

- $H_{1} = V_{1}/A_{1} = 2$
- $H_{2} = V_{2}/A_{2} = 1.5$
- $H_{3} = V_{3}/A_{3} = 2.3333$
- $H_{4} = V_{4}/A_{4} = 2.2$

Vậy chiếc đồng hồ **thứ 3** có hiệu quả cao nhất
