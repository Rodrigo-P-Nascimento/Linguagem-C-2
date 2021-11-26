library(matlib)

x <- seq(-1, 1, by=0.2)#dados
y <- c(5.1213515, 3.9260492, 3.3917448, 2.4160260, 2.1235133, 1.2816421, 1.1253662, 0.8549460, 0.6753195, 0.7752061, 0.9619687)#dados

#Sistema de equações normais
N <- length(x)#N será o numero de dados 
A <- matrix(c(N,sum(x), sum(x^2), sum(x), sum(x^2), sum(x^3), sum(x^2), sum(x^3), sum(x^4)), 3,3)#matriz
b <- c(sum(y), sum(x*y), sum(x^2*y))#vetor
c <- solve(A, b)#solução

#Grafico
plot(x, y, pch = 19, cex = 0.7)
curve(c[3]*x^2 + c[2]*x + c[1], -1, 1, type = "l", col = "blue", add = T)#grafico dados
legend(x = "topright", legend = "Regressão quadrática", col = "blue", lty = 1, lwd = 1, bty = "n")#legenda

#Soma dos resíduos quadráticas
res2 <- sum((c[3]*x^2 + c[2]*x + c[1] - y)^2)
res2
