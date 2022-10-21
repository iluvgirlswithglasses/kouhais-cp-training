---
title: "Knight"
author: "iluvgirlswithglasses"
date: "Sep-18-2022"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
fontsize: 12pt
---

## Statement

Trong một buổi chiều mưa nhàn rỗi, *iluvgirlswithglasses* và *Kither* bày ra một trò chơi như sau:

Cho một bàn cờ vua có $M$ hàng $N$ cột, các hàng được đánh số từ 1 đến $M$ và các cột được đánh số từ 1 đến $N$. Bàn cờ chỉ có đúng một quân mã. Quân cờ này chỉ có thể di chuyển theo các hướng mũi tên như sau:

![Moves](https://raw.githubusercontent.com/iluvgirlswithglasses/img-host/main/host/vnoj_mdc_knight.png)

Trong một **hiệp đấu**, một quân mã sẽ xuất hiện ở vị trí hàng $P$ cột $Q$. *iluvgirlswithglasses* sẽ cầm quân mã trên di chuyển trước, rồi đến *Kither*,... Khi một người đi được một bước thì sẽ đổi lượt cho người kia đi quân.

Ai đến lượt mình mà không di chuyển được là thua.

Giả sử như *iluvgirlswithglasses* và *Kither* đều rất thông minh và thông minh như nhau, hãy tính xem ai thắng, ai thua.

## Input

Dòng 1: 2 số nguyên $M$ và $N$, lần lượt là **số hàng** và **số cột** của bàn cờ. $1 \leq M, N \leq 200$

Dòng 2: Một số nguyên dương $K$ cho biết **số hiệp đấu**. $1 \leq K \leq 1000$

$K$ dòng tiếp theo: Mỗi dòng gồm 2 số nguyên $P$ và $Q$ cho biết vị trí bắt đầu của quân mã. $1 \leq P \leq M$, $1 \leq Q \leq N$

## Output

Xuất ra $K$ dòng. Dòng thứ $i$ xuất ra tên người chiến thắng trong hiệp đấu thứ $i$.

## Sample Input

```
9 8 
3
6 2
7 7
8 8
```

## Sample Output

```
iluvgirlswithglasses
iluvgirlswithglasses
Kither
```
