#FROM openjdk:21-slim
#WORKDIR /app
#COPY App.java .
#RUN javac App.java
#CMD ["java", "App"]
FROM openjdk:21-slim

WORKDIR /app

COPY App.java .

RUN javac App.java

CMD ["java", "App"]
