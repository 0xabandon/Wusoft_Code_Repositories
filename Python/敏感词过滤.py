sensitive_character='新疆''棉''强迫'
test_sentence=input('请输入一段话')
for line in sensitive_character:
    if line in test_sentence:
        test_sentence=test_sentence.replace(line,"*")
print(test_sentence)
#"H&M等欧美品牌抵制新疆棉花的报道，想必大家都已经看过。又一次对中国新疆的污蔑，有人站在台前，有人躲在幕后，有人成了枪手，有人看似无奈卷入其中。但不管是谁，选择了编造或相信谎言，都要承受代价。我们要做的，不仅是支持新疆棉花，更要让在涉华问题上的幕后势力，现出原形。"