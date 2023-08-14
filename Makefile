.PHONY: clean All

All:
	@echo "----------Building project:[ Final - Debug ]----------"
	@cd "Denary_to_binary" && "$(MAKE)" -f  "Final.mk"
clean:
	@echo "----------Cleaning project:[ Final - Debug ]----------"
	@cd "Denary_to_binary" && "$(MAKE)" -f  "Final.mk" clean
