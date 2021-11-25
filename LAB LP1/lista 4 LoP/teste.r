library(matlib)

x <- seq(-1,1,by=0.2)#dados
y <- c(20.9611920, 15.2826605, 10.3260988, 6.6129452, 4.9051565, 2.7211060, 1.9869818, 1.4774476, 0.8526788, 0.6614945, 0.3759807)#dados

Y <- log(y)
#Regressão linear
a1 <- (mean(x*Y) - mean(x)*mean(Y))/(mean(x^2) - mean(x)^2)#coeficiente angular MMQ
b1 <- (mean(Y)*mean(x^2) - mean(x)*mean(x*Y))/(mean(x^2) - mean(x)^2)#coeficiente linear MMQ

#Grafico
plot(x, y,pch = 19, cex = 0.7)
curve(exp(b1)*exp(a1*x), -1, 1,type = "l", col = "blue", add = T)#grafico da curva exponencial
legend(x = "topleft", legend = "Regressão exponencial", col = "blue", lty  = 1, lwd = 1, bty = "n")#legenda

#Soma dos resíduos quadráticos
res2 <- sum((exp(b1)*exp(a1*x) - y)^2)
res2