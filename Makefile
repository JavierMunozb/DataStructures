.PHONY: clean All

All:
	@echo "----------Building project:[ Exercise1 - Debug ]----------"
	@cd "LabTest" && "$(MAKE)" -f  "Exercise1.mk"
clean:
	@echo "----------Cleaning project:[ Exercise1 - Debug ]----------"
	@cd "LabTest" && "$(MAKE)" -f  "Exercise1.mk" clean
