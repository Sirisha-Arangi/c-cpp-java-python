FROM gcc:latest
WORKDIR /app
COPY calculator.cpp .
RUN g++ calculator.cpp -o calculator
CMD ["./calculator"]
