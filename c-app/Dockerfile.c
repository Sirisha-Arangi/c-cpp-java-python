

FROM gcc:latest
WORKDIR /app
COPY factorial.c .
RUN gcc factorial.c -o factorial
CMD ["./factorial"]
