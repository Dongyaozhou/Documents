.PHONY: clean All

All:
	@echo "----------Building project:[ Proyecto01 - Debug ]----------"
	@cd "Proyecto01" && "$(MAKE)" -f  "Proyecto01.mk"
clean:
	@echo "----------Cleaning project:[ Proyecto01 - Debug ]----------"
	@cd "Proyecto01" && "$(MAKE)" -f  "Proyecto01.mk" clean
