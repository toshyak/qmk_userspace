# QMK Keyboard Configuration

## MANDATORY: Documentation First

Before editing ANY QMK configuration file, you MUST:
1. Fetch the relevant page from https://docs.qmk.fm to verify current API, functions, and macros
2. Never invent or guess function names — always confirm they exist in the official docs
3. If unsure whether a feature/function exists, check docs.qmk.fm before writing any code

## Key documentation pages to check (by task):
- Keycodes: https://docs.qmk.fm/keycodes
- Layers: https://docs.qmk.fm/feature_layers
- Macros: https://docs.qmk.fm/feature_macros
- Tap Dance: https://docs.qmk.fm/feature_tap_dance
- Combos: https://docs.qmk.fm/feature_combo
- Custom shifts: https://docs.qmk.fm/feature_key_overrides
- config.h options: https://docs.qmk.fm/config_options

## Rules
- Always use the exact function signatures from docs.qmk.fm
- Do not use functions from memory if they can be verified online
- If a docs page contradicts your training data, trust the docs page

## Git
- Never mention Claude or Claude Code as author or co-author in commit messages
