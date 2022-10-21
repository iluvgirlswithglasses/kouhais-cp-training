---
title: "References"
author: "stdio / 1s / 256MB"
date: "Oct/21/2021"
output: 
  pdf_document: 
    latex_engine: xelatex
urlcolor: blue
---

Hãy nắm thật chắc những nội dung sau để làm được bài:

- C++ data type
- C++ operators
- C++ for loop
- C++ array


# Problems

## Câu 1

### Statement

Cho $N$ số nguyên $A_{1}, A_{2}, ..., A_{N}$ và $N$ số nguyên $B_{1}, B_{2}, ..., B_{N}$

Xuất ra một dãy $C$ gồm $N$ số, với $C_{1} = A_{1} + B_{1}, C_{2} = A_{2} + B_{2}, ..., C_{N} = A_{N} + B_{N}$

### Input

Dòng 1: Một số nguyên dương $N$, $N < 10^6$

Dòng 2: $N$ số nguyên $A_{1}, A_{2}, ..., A_{N}$, $|A_{i}| < 10^6$

Dòng 3: $N$ số nguyên $B_{1}, B_{2}, ..., B_{N}$, $|B_{i}| < 10^6$

### Output

Một dòng là dãy $C$ gồm $N$ số nguyên $C_{i}$

### Sample Input

```
5
1 2 3 4 5
2 2 2 2 2
```

### Sample Output

```
3 4 5 6 7
```

## Câu 2

### Statement

Cho một số nguyên dương $N$. $2N$ số nguyên tiếp theo được đánh số lần lượt là $A_{1}, A_{2}, A_{3},... , A_{2N}$

Xuất ra một dãy gồm $N$ số, số thứ $i$ có giá trị $A_{i} + A_{2N+1-i}$

### Input

Dòng 1: Một số nguyên dương $N$, $N < 10^6$

Dòng 2: $2N$ số nguyên $A_{i}$

### Output

Một dòng thỏa yêu cầu bài toán

### Sample Input

```
4
1 2 3 4 4 3 2 1
```

### Sample Output

```
2 4 6 8
```


# Editorial

## Câu 1

### Lời giải

Tạo trước 2 mảng nguyên $a[N]$ và $b[N]$. Lưu ý: Kích thước của cả 2 mảng phải đảm bảo đủ chứa $N$ số nguyên bất kỳ.

Đọc số nguyên dương $N$ ở dòng đầu tiên rồi ghi vào biến $n$

Đọc $n$ số nguyên tiếp theo rồi ghi vào mảng $a$, thứ tự của số nguyên khi đọc vào cũng chính là index của nó trong mảng. Nếu em cho mảng bắt đầu với $index = 0$ thì $a[0] = A_{1}, a[1] = A_{2},... , a[n-1] = A_{n}$

Đọc tiếp $n$ số nguyên kế theo và lưu vào mảng $b$

Duyệt một vòng $for$ có $i$ nguyên chạy tuyến tính trong khoảng $[0;n)$, in ra tổng $a[i]+b[i]$ trong mỗi lần lặp.

Quan sát: Việc tạo mảng $b$ thực sự không cần thiết. Em có thể lược nó đi.

### Bài giải

`./edit/q1.cpp`

## Câu 2

### Lời giải

Cách giải với quy tắc array start at 0:

Gọi dãy thỏa yêu cầu bài toán là $R[N]$, mảng $R$ bắt đầu với $index = 0$  
Gọi các số trong dãy $A$ là $A_{0}, A_{1}, A_{2},... A_{i} (i < 2N)$

Ta duyệt một vòng $for$ có $i$ nguyên chạy tuyến tính trong khoảng $[0:N)$, với mỗi lần lặp in ra kết quả $R[i] = A_{i} + A_{2n-1-i}$

Em hoàn toàn có thể giải bài toán trên với quy tắt array start at 1 (số đầu tiên trong dãy $A$ mang số thứ tự 1 chứ không phải 0 như ở trên)  
Nhưng anh làm theo cách này là để em thấy được sự linh hoạt trong lập trình

### Bài giải

`./edit/q2.cpp`
