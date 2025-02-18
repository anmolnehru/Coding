from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import time

# Set up Selenium WebDriver
driver = webdriver.Chrome()  # Update if using another browser (e.g., webdriver.Firefox())
driver.get("https://www.amazon.com/hz/mycd/myx#/home/settings/")

# Pause to allow manual login if needed
input("Log into Amazon manually and press Enter here to continue...")

# Function to cancel a single subscription
def cancel_subscription():
    try:
        # Find the first cancel button and click it
        cancel_buttons = driver.find_elements(By.XPATH, "//button[contains(text(), 'Cancel subscription')]")
        if not cancel_buttons:
            print("No cancel buttons found. Exiting...")
            return False

        cancel_buttons[0].click()
        time.sleep(2)

        # Find and confirm cancellation (Update XPATH if needed)
        confirm_buttons = driver.find_elements(By.XPATH, "//button[contains(text(), 'Confirm cancellation')]")
        if confirm_buttons:
            confirm_buttons[0].click()
            time.sleep(3)  # Wait for cancellation to process
            print("Subscription cancelled successfully.")
            return True
        else:
            print("Confirm button not found. Skipping...")
            return False
    except Exception as e:
        print(f"Error: {e}")
        return False

# Keep cancelling until there are no more subscriptions
while cancel_subscription():
    time.sleep(2)

# Close the browser
driver.quit()
print("All subscriptions have been cancelled.")
