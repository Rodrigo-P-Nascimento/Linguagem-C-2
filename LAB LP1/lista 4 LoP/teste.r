library(matlib)

x <- seq(-1,1,by=0.2)
y <- c(0.8517503, 1.8462013, 5.4867843, −4.7784345,-1.7507537, −0.8230178, −0.7315276, −0.4738893, −0.4134608, −0.3333150, −0.2770552)#dados

#Regressão linear
a1 <- (mean(x*(1/y)) - mean(x)*mean((1/y)))/(mean(x^2) - mean(x)^2)#coeficiente angular MMQ
b1 <- (mean((1/y))*mean(x^2) - mean(x)*mean(x*(1/y)))/(mean(x^2) - mean(x)^2)#coeficiente linear MMQ

#Grafico
plot(x,y,pch=19,cex = 0.7)
curve (1/(a1*x + b1) ,-1,1,type = "l",col = "blue",add = T)#grafico da curva hiperbolica
legend(x = "topright", legend = "Regressão hiperbólica", col = "blue", lty = 1, lwd = 1, bty = "n") 

#Soma dos resíduos quadráticos
res2 <- sum(((1/(a1*x + b1))-y)^2)
res2

