.PHONY: clean All

All:
	@echo "----------Building project:[ Sequnces - Debug ]----------"
	@cd "Sequnces" && $(MAKE) -f  "Sequnces.mk"
clean:
	@echo "----------Cleaning project:[ Sequnces - Debug ]----------"
	@cd "Sequnces" && $(MAKE) -f  "Sequnces.mk" clean
