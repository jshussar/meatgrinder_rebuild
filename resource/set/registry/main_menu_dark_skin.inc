;SDL
{dialog
	{frame_size 1}
	{face_color	"23 23 23 200"}
	{text_style "f(arial_narrow)s(%fs)p(0)y(-2)c(FFFFFF)"} ; This appears in the XP bar and in the title of MP settings. It's also the font for many pop up windows excepting 'loading...' and 'loading multiplayer resources...' ; dbd4cb
	{frame_color "20 20 20  "}
}
{static_text
	{disabled_text_color "209 120 54"}
}
{inputline
	{selection
		{face_color "176 151 121 55"}
		{text_color "0 0 0"}
		{ro_face_color "93 93 93 55"}
		{ro_text_color "210 210 210"}
	}
	{text_style "f(arial_narrow)s(%fs)p(0)c(f0ede9)y."}
	{ro_text_color "210 210 210"}
	{disabled_text_color "209 120 54"}
	{modal_frame_color "200 200 200"}
	{cursor_char "_"}
	{blink_period "0.5"}
}
{scrollbar
	{folder "/interface/skin/game/scrollbar/"}
}
{slider
	{folder "/interface/skin/game/slider/"}
}
{listbox
	{folder "/interface/skin/game/listbox/"}
	{face_color "22 22 22"}
	{item
		{text_style
			{normal	 	"f(arial_narrow)s(%fs)p(0)c(176 151 121)y."}
			{selected	"f(arial_narrow)s(%fs)p(0)c(235 178 108)y."}
			{focused	"f(arial_narrow)s(%fs)p(0)c(235 178 108)y."}
			{disabled	"f(arial_narrow)s(%fs)p(0)c(255 0 0)y."} ;64
		}
		{face_color
			{normal		"22 22 22 55"}
			{selected	"22 22 22"}
			{focused	"44 37 30"}
			{disabled	"150 150 150"}
		}
		{selection_shrink 0}
		{text_offset 2}
	}
}
{treeview
	{folder "/interface/skin/game/treeview/"}
}
{dda_editor
	{item
		{ro_text_color "120 120 120"}
		{face_color
			{selected	"22 22 22"}
		}
		{selection_shrink 2}
	}
}
{dda_modal
	{button "/interface/skin/game/doctrine_preview/doctrine_preview"}
	{drop_offset "5"}
}
{splitter
	{folder "/interface/skin/game/splitter/"}
}
{combobox
	{button "/interface/skin/game/combobox/down"}
	{drop_offset "2"}
}
{button
	{text_style
		{normal				"p(0)f(pobeda)e(shadow)s(27)b+c(0xD8D8D8)"}
		{focused_mouse		"p(0)f(pobeda)e(shadow)s(27)b+c(178 135 84)"}
		{focused_keyboard	"p(0)f(pobeda)e(shadow)s(27)b+c(178 135 84)"}
		{pressed			"p(0)f(pobeda)e(shadow)s(27)b+c(216 164 104)"}
		{disabled			"p(0)f(pobeda)e(shadow)s(27)b+c(120 120 120)"}
		;{normal			"p(0)f(pobeda)s(27)c(198 198 198)"}
		;{focused_mouse		"p(0)f(pobeda)s(27)c(178 135 84)"}
		;{focused_keyboard	"p(0)f(pobeda)s(27)c(178 135 84)"}
		;{pressed			"p(0)f(pobeda)s(27)c(255 255 255)"}
		;{disabled			"p(0)f(pobeda)s(27)c(80 80 80)"}
	}
}
{button_dark
	{text_style
		{normal				"p(0)f(open_sans)s(27)c(70 70 70)"}
		{focused_mouse		"p(0)f(open_sans)s(27)c(0 0 0)"}
		{focused_keyboard	"p(0)f(open_sans)s(27)c(0 0 0)"}
		{pressed			"p(0)f(open_sans)s(27)c(0 0 0)"}
		{disabled			"p(0)f(open_sans)s(27)c(100 100 100)"}
	}
}
{button_light
	{text_style
		{normal				"p(0)f(open_sans)s(27)c(153 153 153)"}
		{focused_mouse		"p(0)f(open_sans)s(27)c(255 255 255)"}
		{focused_keyboard	"p(0)f(open_sans)s(27)c(255 255 255)"}
		{pressed			"p(0)f(open_sans)s(27)c(255 255 255)"}
		{disabled			"p(0)f(open_sans)s(27)c(128 128 128)"}
	}
}
{button_light2	; main menu
	{text_style
		{normal				"f(open_sans)e(shadow)s(30)b+c(0xD8D8D8)"}
		{focused_mouse		"f(open_sans)e(shadow)s(30)b+c(0xD8A468)"}
		{focused_keyboard	"f(open_sans)e(shadow)s(30)b+c(0xD8A468)"}
	;	{focused_mouse		"f(open_sans)e(shadow)s(30)b+c(0xb28754)"}
	;	{focused_keyboard	"f(open_sans)e(shadow)s(30)b+c(0xb28754)"}
		{pressed			"y(+2)f(open_sans)e(shadow)s(30)b+c(0xFFFFFF)"}
		{disabled			"f(open_sans)e(shadow)s(30)b+c(120 120 120)"}
	}
}
{button_light3 ; main menu - passed missions
	{text_style
		{normal				"f(pobeda)s(30)b+c(0x787878)"}
		{focused_mouse		"f(pobeda)s(30)b+c(0xFFFFFF)"}
		{focused_keyboard	"f(pobeda)s(30)b+c(0xFFFFFF)"}
		{pressed			"y(+3)f(pobeda)s(30)b+c(0xFFFFFF)"}
		{disabled			"f(pobeda)s(30)b+c(0x808080)"}
	}
}
{button_black
	{text_style
		{normal				"p(0)f(open_sans)s(27)c(0 0 0)"}
		{focused_mouse		"p(0)f(open_sans)s(27)c(0 0 0)"}
		{focused_keyboard	"p(0)f(open_sans)s(27)c(0 0 0)"}
		{pressed			"p(0)f(open_sans)s(27)c(0 0 0)"}
		{disabled			"p(0)f(open_sans)s(27)c(100 100 100)"}
	}
}
{button_tab ; main menu tabs
	{text_style
		{normal				"p(0)f(anka)s(15)c(198 198 198)"}
		{focused_mouse		"p(0)f(anka)s(15)c(255 255 255)"}
		{focused_keyboard	"p(0)f(anka)s(15)c(255 255 255)"}
		{pressed			"p(0)f(anka)s(15)c(255 255 255)"}
		{disabled			"p(0)f(anka)s(15)c(128 128 128)"}
	}
	{face_color
		{normal		"0 0 0 150"}
		{focused_mouse	"93 93 93"}
		{focused_keyboard	"93 93 93"}
		{pressed	"93 93 93"}
		{disabled	"150 150 150"}
	}
}
{button_start ; start button
	{text_style
		{normal				"p(0)f(anka)s(%fs)c(198 198 198)"}
		{focused_mouse		"p(0)f(anka)s(%fs)c(128 198 128)"}
		{focused_keyboard	"p(0)f(anka)s(%fs)c(128 198 128)"}
		{pressed			"p(0)f(anka)s(%fs)c(128 255 128)"}
		{disabled			"p(0)f(anka)s(%fs)c(128 128 128)"}
	}
	{face_color
		{normal				"0 0 0 150"}
		{focused_mouse		"150 93 93"}
		{focused_keyboard	"150 93 93"}
		{pressed			"150 93 93"}
		{disabled			"150 150 150"}
	}
}
{button_main
	{text_style
		{normal				"y(-5)p(0)f(pobeda)s(21)b+c(178 135 84)"}
		{focused_mouse		"y(-5)p(0)f(pobeda)s(21)b+c(22 22 22)"}
		{focused_keyboard	"y(-5)p(0)f(pobeda)s(21)b+c(22 22 22)"}
		{pressed			"y(-5)p(0)f(pobeda)s(21)b+c(178 135 84)"}
		{disabled			"y(-5)p(0)f(pobeda)s(21)b+c(128 128 128)"}
	}
	{text2_style
		{normal				"p(0)f(anka)s(17)e(shadow)c(219 212 203)"}
		{focused_mouse		"p(0)f(anka)s(17)c(22 22 22)"}
		{focused_keyboard	"p(0)f(anka)s(17)c(22 22 22)"}
		{pressed			"p(0)f(anka)s(17)e(shadow)c(219 212 203)"}
		{disabled			"p(0)f(anka)s(17)e(shadow)c(128 128 128)"}
	}
	{face_color
		{normal				"0 0 0 150"}
		{focused_mouse		"150 93 93"}
		{focused_keyboard	"150 93 93"}
		{pressed			"150 93 93"}
		{disabled			"150 150 150"}
	}
}
{inputline_menu
	{frame_size 0}
	{face_color	"55 8 4 200"}
	{frame_color "200 200 200"}
	
	{selection
		{face_color "93 93 93"}
		{text_color "0 0 0"}
		{ro_face_color "93 93 93 192"}
		{ro_text_color "67 67 67"}
	}
	{text_style "f(anka)s(17)p(0)c(198 198 198)y."}
	{ro_text_color "255 255 255"}
	{disabled_text_color "179 179 179"}
	{modal_frame_color "255 255 255"}
	{cursor_char "_"}
	{blink_period "0.7"}
}
{inputline_clan_tag
	{frame_size 0}
	{face_color	"20 20 20 200"}
	{frame_color "50 50 50"}
	
	{selection
		{face_color "93 93 93"}
		{text_color "0 0 0"}
		{ro_face_color "93 93 93 192"}
		{ro_text_color "67 67 67"}
	}
	{text_style "f(anka)e(shadow)s(30)p(0)c(198 198 198)y."}
	{ro_text_color "255 255 255"}
	{disabled_text_color "179 179 179"}
	{modal_frame_color "255 255 255"}
	{cursor_char "_"}
	{blink_period "0.7"}
}
{dialogbox
	{text_style "f(arial_narrow)s(8)p(0)c(255 255 255)"}
}
{frame
	{text_style "f(open_sans)s(28)c(255 255 255)"}
}
{objectives
	{text_style "f(arial_narrow)s(14)p(0)c(255 255 255)"} ;temp size fix prev use s(%fs)
}
{message_history
	{text_style "f(arial_narrow)s(%fs)p(0)c(255 255 255)"}
}
{event_history
	{text_style "<f(arial_hq)s(8)>p(0)"}
}
{talk
	{text_style "f(arial_narrow)s(15)p(0)c(255 255 255)"} ;temp size fix prev use s(%fs)
}
{tip
	{text_style "f(arial_hq)s(8)c(20 20 20)"}
	{text_style_link "f(arial_hq)s(8)c(20 100 20)"}
	{text_style_link_selected "f(arial_hq)s(8)c(100 20 20)"}
}
{scenario
	{text_style "s(10)c(200 200 200)"}
	{text_style_small "f(arial_hq)s(8)c(200 200 200)"}
}
{gc_hint
	{text_style_title	"f(impact)s(21)c(255 255 255)"}
	{text_style			"f(arial_narrow)s(15)c(255 255 255)"}
	{text_style_req		"f(arial_narrow)s(15)c(255 150 150)"}
	{text_style_action	"f(arial_narrow)s(15)c(255 255 150)"}
	{text_style_usage	"f(arial_narrow)s(15)c(150 255 150)"}
	{face_color "50 50 50 180"}
	{frame_color "140 140 140 180"}
}
{video_dialog
	{face_color "50 50 50 180"}
	{subtitle_text_style "e(shadow)f(open_sans)s(15)c(255 255 255)"}
}
