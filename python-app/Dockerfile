#FROM python:3.11-slim
#WORKDIR /app
#COPY app.py .
#CMD ["python", "app.py"]
FROM python:3.11-slim

WORKDIR /app

COPY app.py .

RUN pip install flask

CMD ["python", "app.py"]
