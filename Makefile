.PHONY: clean All

All:
	@echo "----------Building project:[ PECLZhouDongyao - Debug ]----------"
	@cd "Proyecto01" && "$(MAKE)" -f  "PECLZhouDongyao.mk"
clean:
	@echo "----------Cleaning project:[ PECLZhouDongyao - Debug ]----------"
	@cd "Proyecto01" && "$(MAKE)" -f  "PECLZhouDongyao.mk" clean
