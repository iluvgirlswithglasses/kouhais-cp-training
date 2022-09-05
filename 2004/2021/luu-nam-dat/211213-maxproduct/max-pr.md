---
title: "Max Product"
author: "stdio / 1s / 256mb"
date: "Dec-13-2021"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
---

## Statement

Kyouko đường đường chính chính là Vua Trò Chơi, ấy mà nay trong bộ môn bài ma thuật cô lại bị Yugi soán ngôi mất. Không thể để mất mặt như vậy, Kyouko quyết tâm soạn ra 1 bộ bài mạnh mẽ nhất để đối chiến với Yugi.

Một bộ bài $A$ có $N$ thẻ bài, các thẻ bài có chỉ số sức mạnh lần lượt là $A_{1}, A_{2},... A_{N}$, $-10^9 \leq A_{i} \leq 10^9$. Như bạn biết, sức mạnh của một bộ bài không đến từ một lá bài, mà đến từ cách nhiều lá bài kết hợp với nhau. Nắm bắt được điều này, Kyouko định nghĩa sức mạnh bộ bài của mình là tích chỉ số sức mạnh của $N$ lá bài có trong cọc.

Sau khi soạn được cho mình một bộ bài $N$ lá, Kyouko phát sinh một câu hỏi: Nếu loại tối đa 1 lá bài ra khỏi cọc, thì sức mạnh tối đa của bộ bài có thể là bao nhiêu ?

Bạn hãy trả lời câu hỏi này giúp Kyouko

## Input

Dòng 1: Một số nguyên dương $N$

Dòng 2: $N$ số nguyên $A_{i}$, $-10^9 \leq A_{i} \leq 10^9$

## Output

Một số nguyên theo yêu cầu chia dư cho $10^9 + 7$

## Subtasks

25% test có $N \leq 10^3, A_{i} \ne 0$  
25% test có $N \leq 10^6, A_{i} \ne 0$  
25% test có $N \leq 10^3$  
25% test có $N \leq 10^6$  

## Sample Input 1

```
4  
4 2 3 5
```

## Sample Output 1

```
120
```

## Sample Input 2

```
5  
-1 -2 -4 1 2
```

## Sample Output 2

```
16
```
