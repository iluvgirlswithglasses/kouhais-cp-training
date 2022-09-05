---
title: "Pair of Subsequences"
author: "stdio / 1s / 256mb"
date: "Oct-22-2021"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
fontsize: 12pt
---

## Statement

Kagami là một cô gái hay ghen tuông. Dạo này Kagami để ý thấy Konata - Crush của cô - thường xuyên ngồi một mình rồi cười khúc khích trước màn hình máy tính làm cô rất sốt ruột. Sợ rằng có một ai đó đang lén lút cướp mất crush dấu yêu của mình đi, cô quyết tâm nhân lúc Konata đi vắng sẽ đột kích vào máy tính cá nhân của Konata nhằm thăm dò tin nhắn.

Với mấy năm kinh nghiệm rình mò crush, Kagami phát hiện ra máy tính của Konata có mật khẩu là kết quả của bài toán sau:

*"Cho một dãy $N$ số nguyên dương $A_{1}, A_{2},... A_{N}$, hãy tìm cách xóa **tối đa 2 dãy con liên tiếp** trong dãy $A$ sao cho trung bình cộng của tất cả các phần tử còn lại trong dãy $A$ là cực đại"*

Khổ nỗi, dãy $A$ thì lại quá dài còn Kagami thì lại là con gái chân yếu tay mềm hơi thiếu sức. Kagami muốn nhờ bạn vạch trần mật khẩu của Konata giúp bạn ấy.

## Input

Dòng 1: Một số nguyên dương $N$, $N \leq 10^6$

Dòng 2: $N$ số nguyên $A_{1}, A_{2}, ... A_{N}$, $|A_{i}| \leq 10^9$

## Output

Trung bình cộng có giá trị lớn nhất tìm được

## Sample Input

7  
2 3 4 4 1 3 2

## Sample Output

4

## Explanation

Xóa đi 2 dãy ${(2, 3)}$ và ${(1, 3, 2)}$, dãy $A$ khi này là ${4, 4}$. Trung bình cộng của $A$ lúc này là cực đại.
