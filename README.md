# Thực nghiệm các thuật toán sắp xếp

## Mô tả
Thí nghiệm ghi nhận thời gian thực thi 10 bộ dữ liệu của các thuật toán sắp xếp QuickSort, HeapSort, MergeSort và hàm sort của C++

## Cấu trúc Repository
Repository chứa file báo cáo kết quả thực nghiệm (pdf) và hai thư mục chính:

1. **code**: Chứa code của các thuật toán sắp xếp - QuickSort.cpp, HeapSort.cpp, Mergesort.cpp và SortCpp.cpp.
2. **test**: Chứa 10 bộ dữ liệu được sử dụng để kiểm tra thuật toán. Mỗi tệp chứa một dãy số thực ngẫu nhiên. Tệp **test1.inp** chứa dãy được sắp xếp tăng dần, **test2.inp** chứa dãy được sắp xếp giảm dần, các tệp còn lại được sắp xếp ngẫu nhiên.

## Thực hiện thí nghiệm
Để thực hiện thí nghiệm, bạn cần cài đặt C++ trên máy tính của mình. Làm theo các bước sau:
1. Sao chép repository vào máy tính của bạn.
2. Di chuyển đến thư mục mã nguồn **code**
3. Chạy tệp thí nghiệm: python experiment.py
Tệp thí nghiệm sẽ chạy mỗi thuật toán sắp xếp trên từng tập dữ liệu và đầu ra thời gian chạy cho mỗi kết hợp thuật toán và tập dữ liệu.
