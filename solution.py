def max_profit(prices):
    buy_day = 0
    max_profit = 0
    for day, price in enumerate(prices):
        current_profit = price - prices[buy_day]
        if current_profit > 0:
            max_profit = max(max_profit, current_profit)
            continue
        buy_day = day
    return max_profit