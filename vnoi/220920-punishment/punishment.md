---
title: "Punishment"
author: "iluvgirlswithglasses"
date: "Sep-20-2022"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
fontsize: 12pt
---

## Statement

Một hôm nọ, *iluvgirlswithglasses* đang thi div2 trên codeforces thì gặp phải một dạng bài mới. Nhưng thay vì quyết chí giải bài, cậu lại nảy sinh lười biếng, cúp sớm 30 phút và trốn đi xem anime. Khi kỳ thi kết thúc, *Kither* nhận thấy bài mà *iluvgirlswithglasses* đã bỏ thực chất là một bài rất dễ, và cậu đã lãng phí mất một số điểm khổng lồ vì biếng nhác. Thế nên *Kither* quyết định phạt cậu như sau:

Gọi $N$ là số điểm mà *iluvgirlswithglasses* đã lãng phí, cậu sẽ bị đánh $X$ đòn với:

\begin{center}
$X = \displaystyle\sum_{i=1}^{N} (N$ mod $i)$. 
\end{center}

Trong đó, *mod* là phép chia lấy dư.

Và thế là *Kither* muốn nhờ bạn tính $X$.

## Input

Một số nguyên $N$. $1 \leq N \leq 10^{13}$

## Output

Một số nguyên $X$ chia dư cho $10^9 + 7$

## Sample Input

```
10
```

## Sample Output

```
13
```

## Constraints

20% số bài có $N \leq 10^{6}$

80% số bài còn lại không có điều kiện gì thêm
