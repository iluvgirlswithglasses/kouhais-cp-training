---
title: "Magic Phrase"
author: "stdio / 1s / 256MB"
date: "Dec/04/2021"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
---

*Nhìn thấy cái đề này trong mơ, đề khá là bruh haha*

## Statement

Bạn và Eleine - cô phù thủy trẻ - đang phiêu lưu ở một tàn tích cổ. Tới đoạn, Eleine cảm nhận thấy có một item vô cùng giá trị đang được ẩn sau một cánh cổng ma pháp.

Để mở cánh cổng cần phải tuần tự niệm những ma thuật loại $A_{1}, A_{2}, A_{3},... A_{N}$. Để niệm phép, Eleine có thể dùng những viên sỏi ma thuật loại $B_{1}, B_{2}, B_{3},... B_{M}$.

Nhận thấy cần $N$ lượt niệm phép để có thể mở được cánh cổng. Ở lượt thứ $i$, Eleine chọn ra một viên sỏi thứ $j$ sao cho $B_{j} = A_{i}$. Viên sỏi đã dùng sẽ mất hết ma lực, không dùng được nữa.

Do ma lực của cánh cổng quá cao cấp, số lượng ma thuật phải niệm cũng là quá nhiều. Điều đó khiến cho Eleine không thể tính được rằng mình có đủ sỏi hay không, và đặc biệt là bị thiếu bao nhiêu sỏi. Bạn hãy trả lời thắc mắc đó của Eleine.

## Input

Dòng 1: 2 số nguyên $N$ và $M$, $0 \leq N, M \leq 10^6$

Dòng 2: $N$ số nguyên dương $A_{1}, A_{2}, A_{3},... A_{N}$, $A_{i} \leq 10^6$

Dòng 3: $M$ số nguyên dương $B_{1}, B_{2}, B_{3},... B_{M}$, $B_{i} \leq 10^6$

## Output

Dòng 1: In ra `"YES"` nếu như Eleine đủ sỏi để mở cánh cổng, mặc khác in `"NO"`. Chuỗi in ra không có dấu ngoặc kép. 

Nếu câu trả lời là `"NO"`, dòng 2 in ra số sỏi bị thiếu.

## Sample Input

```
8 10
2 2 4 1 5 6 6 9
1 5 2 4 5 2 6 1 3 3
```

## Sample Output

```
NO
2
```

## Explanation

Eleine thiếu 1 viên sỏi loại 6 và 1 viên loại 9.
