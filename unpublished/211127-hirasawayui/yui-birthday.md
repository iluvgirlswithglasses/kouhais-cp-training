---
title: "Yui's Birthday"
author: "stdio / 1s / 256mb"
date: "Nov-27-2021"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
---

## Statement

Hôm nay là ngày sinh nhật Hirasawa Yui. Các fanboys của CLB hâm mộ Yui khắp nơi gửi về phòng trà HTT những bản nhạc jrock cực căng coi như quà dịp sanh thần. Nakano Azusa - đàn em của Yui - quyết định bốc ra một số bài hát **"cháy"** nhất để đàn hát cho chị mình nghe nhân dịp này. Khổ nỗi số lượng bài hát là quá nhiều, Azusa muốn nhờ bạn viết chương trình giải quyết bài toán dưới đây hộ em ấy:

Gọi độ **"cháy"** của một bài hát là độ dài lớn nhất của một đoạn nhạc trong bài, sao cho nốt thứ $i+1$ trong đoạn đó luôn cao hơn hoặc bằng nốt $i$. Độ cao của nốt $i$ được biểu diễn bằng một số nguyên dương $A_{i} \leq 10^9$. Yêu cầu xác định độ **"cháy"** của một bài hát bất kỳ.

## Input

Dòng 1: Một số nguyên dương $N$ cho biết số nốt nhạc trong bài, $N \leq 10^6$

Dòng 2: $N$ nốt $A_{1}, A_{2}, A_{3},... A_{N}$, $A_{i}$ nguyên dương, $A_{i} \leq 10^9$

## Output

Một số nguyên duy nhất là **"độ cháy"** của bài. Nói cách khác: Độ dài của dãy con liên tiếp không giảm dài nhất trong dãy $A$

## Sample Input

```
9
2 3 5 2 4 4 5 4 5
```

## Sample Output

```
4
```

## Explanation

Chọn dãy `{2, 4, 4, 5}`
