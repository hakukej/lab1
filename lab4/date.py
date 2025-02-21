from datetime import datetime, timedelta
today = datetime.now()
print(f"5 days ago: {today - timedelta(days=5)}")
yesterday = today - timedelta(days=1)
tomorrow = today + timedelta(days=1)
print(f"yesterday: {yesterday}")
print(f"tomorrow: {tomorrow}")
print(f"today without microseconds: {today.replace(microsecond = 0)}")
difference_seconds = (tomorrow - yesterday).total_seconds()
print(f"two dates difference: {difference_seconds}")