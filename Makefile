.PHONY: clean All

All:
	@echo "----------Building project:[ poker-odds-checker - Debug ]----------"
	@cd "poker-odds-checker" && "$(MAKE)" -f  "poker-odds-checker.mk"
clean:
	@echo "----------Cleaning project:[ poker-odds-checker - Debug ]----------"
	@cd "poker-odds-checker" && "$(MAKE)" -f  "poker-odds-checker.mk" clean
