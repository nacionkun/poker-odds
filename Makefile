.PHONY: clean All

All:
	@echo "----------Building project:[ checker - Debug ]----------"
	@cd "checker" && "$(MAKE)" -f  "checker.mk"
clean:
	@echo "----------Cleaning project:[ checker - Debug ]----------"
	@cd "checker" && "$(MAKE)" -f  "checker.mk" clean
