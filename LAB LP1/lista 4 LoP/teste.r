library(matlib)

x <- seq(-1,1,by=0.2)#dados
y <- c(1.325797, 2.088424, 2.441511, 2.041860, 2.602180, 3.527601, 3.996762, 4.142978, 5.097782, 5.647629, 5.785799)#dados

Y <- log(y)
#Regressão linear
a1 <- (mean(x*Y) - mean(x)*mean(Y))/(mean(x^2) - mean(x)^2)#coeficiente angular MMQ
b1 <- (mean(Y)*mean(x^2) - mean(x)*mean(x*Y))/(mean(x^2) - mean(x)^2)#coeficiente linear MMQ

#Grafico
plot(x, y,pch = 19, cex = 0.7)
curve(exp(b1 + a1*x), -1, 1,type = "l", col = "blue", add = T)#grafico da curva exponencial
legend(x = "topleft", legend = "Curva exponencial", col = "blue", lty  = 1, lwd = 1, bty = "n")#legenda

#Soma dos resíduos quadráticos
res2 <- sum((exp(b1 + a1*x) - y)^2)
res2

