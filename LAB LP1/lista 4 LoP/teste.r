x <- seq(-1,1,by=0.2)#dados
y <- c(0.8517503, 1.8462013, 5.4867843, −4.7784345,-1.7507537, −0.8230178, −0.7315276, −0.4738893, −0.4134608, −0.3333150, −0.2770552)#dados

a1 <- (mean(x*y) - mean(x)*mean(y))/(mean(x^2) - mean(x)^2)#coeficiente angular MMQ
b1 <- (mean(y)*mean(x^2) - mean(x)*mean(x*y))/(mean(x^2) - mean(x)^2)#coeficiente linear MMQ

a2 <- (mean(x*(1/y)) - mean(x)*mean((1/y)))/(mean(x^2) - mean(x)^2)
b2 <- (mean((1/y))*mean(x^2) - mean(x)*mean(x*(1/y)))/(mean(x^2) - mean(x)^2)

plot(x,y,pch=19,cex = 0.7)

curve(a1*x + b1,-1,1,type = "l", col = "blue", add = T)#reta ajustada
curve (1/(a2*x + b2) ,-1,1,type = "l",col = "red",add = T)#hiperbole

legend(x = "topright", legend = "Modelo hiperbólico", col = "red", lty = 1, lwd = 1, bty = "n")#legenda
legend(x = "topleft", legend = "Regressão Linear", col = "blue", lty = 1, lwd = 1, bty = "n")#legenda

