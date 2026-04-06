;SDL
{dialog
	{frame_size 1}
	{face_color	"40 40 40 50"}
	{text_style "f(arial_narrow)s(%fs)p(0)y(-2)c(255 255 255)"}
}
{static_text
	{disabled_text_color "67 67 67"}
}
{inputline
	{selection
		{face_color "93 93 93"}
		{text_color "0 0 0"}
		{ro_face_color "93 93 93 192"}
		{ro_text_color "255 255 255"}
	}
	{text_style "f(arial_narrow)s(%fs)p(0)c(0 0 0)y."}
	{ro_text_color "255 255 255	"}
	{disabled_text_color "179 179 179"}
	{modal_frame_color "255 255 255"}
	{cursor_char "_"}
	{blink_period "0.7"}
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
		{ro_text_color "167 167 167"}
		{face_color
			{selected	"150 150 150"}
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
	{drop_offset "5"}
}
{button
	{text_style
		{normal				"p(0)f(open_sans)s(27)b+c(0 0 0)"}
		{focused_mouse		"p(0)f(open_sans)s(27)b+c(255 255 255)"}
		{focused_keyboard	"p(0)f(open_sans)s(27)b+c(255 255 255)"}
		{pressed			"p(0)f(open_sans)s(27)b+c(255 255 255)"}
		{disabled			"p(0)f(open_sans)s(27)b+c(80 80 80)"}
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
		{normal				"f(open_sans)s(30)c(0xc6c6c6)"}
		{focused_mouse		"f(open_sans)s(30)c(0xFFFFFF)"}
		{focused_keyboard	"f(open_sans)s(30)c(0xFFFFFF)"}
		{pressed			"y(+3)f(open_sans)s(30)c(0xFFFFFF)"}
		{disabled			"f(open_sans)s(30)c(0x808080)"}
	}
}
{button_light3 ; main menu - passed missions
	{text_style
		{normal				"f(open_sans)s(30)c(0x787878)"}
		{focused_mouse		"f(open_sans)s(30)c(0xFFFFFF)"}
		{focused_keyboard	"f(open_sans)s(30)c(0xFFFFFF)"}
		{pressed			"y(+3)f(open_sans)s(30)c(0xFFFFFF)"}
		{disabled			"f(open_sans)s(30)c(0x808080)"}
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
{dialogbox
	{text_style "f(arial_narrow)s(%fs)p(0)c(0 0 0)"}
}
{frame
	{text_style "f(open_sans)s(28)c(255 255 255)"}
}
{objectives
	{text_style "f(arial_narrow)s(%fs)p(0)c(140 140 140)"}
}
{message_history
	{text_style "f(arial_narrow)s(%fs)p(0)c(255 255 255)"}
}
{event_history
	{text_style "f(arial_hq)s(8)>p(0)c(255 255 255)"}
}
{talk
	{text_style "f(arial_narrow)s(%fs)p(0)c(255 255 255)"}
}
{tip
	{text_style "f(arial_hq)s(8)c(12 12 12)"}
	{text_style_link "f(arial_hq)s(8)e(shadow)s(15)c(219 165 79)"}
	{text_style_link_selected "f(arial_hq)s(8)e(shadow)s(15)c(255 255 255)"}
}
{scenario
	{text_style "s(10)c(200 200 200)"}
	{text_style_small "f(arial_hq)s(8)c(200 200 200)"}
}
{gc_hint
	{text_style_title	"f(anka)s(21)c(219 165 79)"}
	{text_style			"f(arial_narrow)s(15)c(209 209 209)"}
	{text_style_req		"f(arial_narrow)s(15)c(240 240 240)"}
	{text_style_action	"f(arial_narrow)s(15)c(200 200 200)"}
	{text_style_usage	"f(arial_narrow)s(15)c(124 181 71)"}
	{face_color "23 23 23 205"}
	{frame_color "20 20 20 205"}
}
{video_dialog
	{face_color "0 0 0"}
	{subtitle_text_style "e(shadow)f(open_sans)s(30)c(185 199 199)"}
}
