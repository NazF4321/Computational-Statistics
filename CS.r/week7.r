sale=data.frame(sdrinks=c(90000,88000,93000,98000,96000,95000,93000,82000,75000,78000,77000,75000),
                cclot=c(1000,920,1100,1300,1200,1250,1230,830,770,790,780,760))
print(sale)
library("ggpubr")

ggqqplot(sale$sdrinks, ylab = "SDRINKS")
ggqqplot(sale$cclot, ylab = "CLOTHES")
res <- cor.test(sale$sdrinks, sale$cclot, 
                method = "pearson")
res