sale=data.frame(sdrinks=c(90000,88000,93000,98000,96000,95000,93000,82000,75000,78000,77000,75000),
                cclot=c(1000,920,1100,1300,1200,1250,1230,830,770,790,780,760))
print(sale)
library("ggpubr")

ggqqplot(sale$sdrinks, ylab = "SDRINKS")
ggqqplot(sale$cclot, ylab = "CLOTHES")
res <- cor.test(sale$sdrinks, sale$cclot, 
                method = "pearson")
res

output:
   sdrinks cclot
1    90000  1000
2    88000   920
3    93000  1100
4    98000  1300
5    96000  1200
6    95000  1250
7    93000  1230
8    82000   830
9    75000   770
10   78000   790
11   77000   780
12   75000   760