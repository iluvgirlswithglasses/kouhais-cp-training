
# Love-coloured Master Spark

*Love-coloured Master Spark* là tuyệt chiêu của đại phù thủy *Marisa Kirisame*. Tương truyền rằng ai trúng chiêu sẽ lập tức đi du lịch một chiều đến nơi chín suối. Với mong muốn học bá chiêu để lấy lòng *Reimu Hakurei*, *iluvgirlswithglasses* đã lên núi tìm cô mà cam bái hạ phong, tầm sư học đạo.

*Marisa* cho biết: Để thi triển *Master Spark*, người niệm chú cần phải chọn ra một đoạn con liên tiếp $A_{L}, A_{L+1}, A_{L+2},.. A_{R}$ từ dãy số $A_{1}, A_{2}, A_{3},.. A_{N}$ cho trước $(1 \leq L \leq R \leq N)$. Cô nói thêm: Sức mạnh của *Master Spark* chính là độ dài của đoạn con có tích các phần tử là lớn nhất.

Hỏi: Cho trước dãy số $A$, hãy giúp *iluvgirlswithglasses* tìm ra dãy con thỏa yêu cầu.

## Input

Dòng 1: Một số nguyên $T$ cho biết số test case

Ứng với mỗi test case sẽ có 2 dòng:

Dòng 1: Một số nguyên $N$. $1 \leq N \leq 10^6$

Dòng 2: $N$ số $A_{1}, A_{2}, A_{3},.. A_{N}$. $|A_{i}| \leq 10^{18}$

## Output

Với mỗi test case, in ra một số nguyên cho biết độ dài của đoạn con liên tiếp có tích lớn nhất. Nếu có nhiều dãy con có cùng một tích số, in ra độ dài của dãy dài nhất.

## Subtasks

25% số test có $1 \leq N \leq 20$

Số test còn lại không có điều kiện gì thêm.

## Sample Input

```
2
6
-10 1 10 0 8 7
12
2 2 4 0 100 100 -8 -2 0 67 -69 -68
```

## Sample Output

```
2
3
```

## Giải thích

Dãy được chọn ở test case thứ nhất là `8 7`, dãy được chọn ở test case thứ hai là `67 -69 -68`.

## Lưu ý

Đây là phiên bản nâng cấp của bài Max Product v2.

Bài này nếu làm mà không có kỹ thuật thì chắc chắn sẽ bị tràn số. Nếu cày trâu cày bò thì có thể cắm BigNum, thích thì cắm Python, nhưng nếu muốn AC thì chỉ có thể cắm Toán ;)
