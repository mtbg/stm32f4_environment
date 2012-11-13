/* Memory regions of the device */

MEMORY {
	int_flash (rx) : org = 0x08000000, len = 1M
	int_ram (w) : org = 0x20000000, len = 16k + 112k
}
