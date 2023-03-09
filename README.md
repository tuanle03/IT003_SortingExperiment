# Thực nghiệm các thuật toán sắp xếp

## Mô tả
Thí nghiệm ghi nhận thời gian thực thi 10 bộ dữ liệu của các thuật toán sắp xếp **QuickSort, HeapSort, MergeSort** và **hàm sort của C++**

## Cấu trúc Repository
Repository chứa file báo cáo kết quả thực nghiệm (pdf) và hai thư mục chính:

1. **`code`**: Chứa code của các thuật toán sắp xếp `QuickSort.cpp`, `HeapSort.cpp`, `Mergesort.cpp` và `SortCpp.cpp`.
2. **`test`**: Chứa 10 bộ dữ liệu được sử dụng để kiểm tra thuật toán. Mỗi tệp chứa một dãy số thực ngẫu nhiên. 
   - Tệp **`test1.inp`** chứa dãy được sắp xếp ***tăng dần***
   - Tệp **`test2.inp`** chứa dãy được sắp xếp ***giảm dần***
   - Các tệp còn lại được sắp xếp ngẫu nhiên.

## Thực hiện thí nghiệm
Để thực hiện thí nghiệm, bạn cần cài đặt C++ trên máy tính của mình. Làm theo các bước sau:
1. Sao chép repository vào máy tính của bạn.
```
git clone git@github.com:cnmeow/IT003_SortingExperiment.git
```
2. Mở thư mục **`code`**, chạy file code của thuật toán cần thí nghiệm. Dữ liệu đầu ra gồm 10 dòng tương ứng với thời gian mà thuật toán đó sắp xếp 10 bộ dữ liệu.
