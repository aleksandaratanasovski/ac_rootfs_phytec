/* Generated by wayland-scanner 1.11.0 */

#ifndef TEXT_INPUT_UNSTABLE_V2_CLIENT_PROTOCOL_H
#define TEXT_INPUT_UNSTABLE_V2_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_text_input_unstable_v2 The text_input_unstable_v2 protocol
 * @section page_ifaces_text_input_unstable_v2 Interfaces
 * - @subpage page_iface_zwp_text_input_v2 - text input
 * - @subpage page_iface_zwp_text_input_manager_v2 - text input manager
 * @section page_copyright_text_input_unstable_v2 Copyright
 * <pre>
 *
 * Copyright © 2012, 2013 Intel Corporation
 * Copyright © 2015, 2016 Jan Arne Petersen
 *
 * Permission to use, copy, modify, distribute, and sell this
 * software and its documentation for any purpose is hereby granted
 * without fee, provided that the above copyright notice appear in
 * all copies and that both that copyright notice and this permission
 * notice appear in supporting documentation, and that the name of
 * the copyright holders not be used in advertising or publicity
 * pertaining to distribution of the software without specific,
 * written prior permission.  The copyright holders make no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied
 * warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
 * AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
 * ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
 * THIS SOFTWARE.
 * </pre>
 */
struct wl_seat;
struct wl_surface;
struct zwp_text_input_manager_v2;
struct zwp_text_input_v2;

/**
 * @page page_iface_zwp_text_input_v2 zwp_text_input_v2
 * @section page_iface_zwp_text_input_v2_desc Description
 *
 * The zwp_text_input_v2 interface represents text input and input methods
 * associated with a seat. It provides enter/leave events to follow the
 * text input focus for a seat.
 *
 * Requests are used to enable/disable the text-input object and set
 * state information like surrounding and selected text or the content type.
 * The information about the entered text is sent to the text-input object
 * via the pre-edit and commit events. Using this interface removes the need
 * for applications to directly process hardware key events and compose text
 * out of them.
 *
 * Text is valid UTF-8 encoded, indices and lengths are in bytes. Indices
 * have to always point to the first byte of an UTF-8 encoded code point.
 * Lengths are not allowed to contain just a part of an UTF-8 encoded code
 * point.
 *
 * State is sent by the state requests (set_surrounding_text,
 * set_content_type, set_cursor_rectangle and set_preferred_language) and
 * an update_state request. After an enter or an input_method_change event
 * all state information is invalidated and needs to be resent from the
 * client. A reset or entering a new widget on client side also
 * invalidates all current state information.
 * @section page_iface_zwp_text_input_v2_api API
 * See @ref iface_zwp_text_input_v2.
 */
/**
 * @defgroup iface_zwp_text_input_v2 The zwp_text_input_v2 interface
 *
 * The zwp_text_input_v2 interface represents text input and input methods
 * associated with a seat. It provides enter/leave events to follow the
 * text input focus for a seat.
 *
 * Requests are used to enable/disable the text-input object and set
 * state information like surrounding and selected text or the content type.
 * The information about the entered text is sent to the text-input object
 * via the pre-edit and commit events. Using this interface removes the need
 * for applications to directly process hardware key events and compose text
 * out of them.
 *
 * Text is valid UTF-8 encoded, indices and lengths are in bytes. Indices
 * have to always point to the first byte of an UTF-8 encoded code point.
 * Lengths are not allowed to contain just a part of an UTF-8 encoded code
 * point.
 *
 * State is sent by the state requests (set_surrounding_text,
 * set_content_type, set_cursor_rectangle and set_preferred_language) and
 * an update_state request. After an enter or an input_method_change event
 * all state information is invalidated and needs to be resent from the
 * client. A reset or entering a new widget on client side also
 * invalidates all current state information.
 */
extern const struct wl_interface zwp_text_input_v2_interface;
/**
 * @page page_iface_zwp_text_input_manager_v2 zwp_text_input_manager_v2
 * @section page_iface_zwp_text_input_manager_v2_desc Description
 *
 * A factory for text-input objects. This object is a global singleton.
 * @section page_iface_zwp_text_input_manager_v2_api API
 * See @ref iface_zwp_text_input_manager_v2.
 */
/**
 * @defgroup iface_zwp_text_input_manager_v2 The zwp_text_input_manager_v2 interface
 *
 * A factory for text-input objects. This object is a global singleton.
 */
extern const struct wl_interface zwp_text_input_manager_v2_interface;

#ifndef ZWP_TEXT_INPUT_V2_CONTENT_HINT_ENUM
#define ZWP_TEXT_INPUT_V2_CONTENT_HINT_ENUM
/**
 * @ingroup iface_zwp_text_input_v2
 * content hint
 *
 * Content hint is a bitmask to allow to modify the behavior of the text
 * input.
 */
enum zwp_text_input_v2_content_hint {
	/**
	 * no special behaviour
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_NONE = 0x0,
	/**
	 * suggest word completions
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_AUTO_COMPLETION = 0x1,
	/**
	 * suggest word corrections
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_AUTO_CORRECTION = 0x2,
	/**
	 * switch to uppercase letters at the start of a sentence
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_AUTO_CAPITALIZATION = 0x4,
	/**
	 * prefer lowercase letters
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_LOWERCASE = 0x8,
	/**
	 * prefer uppercase letters
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_UPPERCASE = 0x10,
	/**
	 * prefer casing for titles and headings (can be language dependent)
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_TITLECASE = 0x20,
	/**
	 * characters should be hidden
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_HIDDEN_TEXT = 0x40,
	/**
	 * typed text should not be stored
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_SENSITIVE_DATA = 0x80,
	/**
	 * just latin characters should be entered
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_LATIN = 0x100,
	/**
	 * the text input is multiline
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_HINT_MULTILINE = 0x200,
};
#endif /* ZWP_TEXT_INPUT_V2_CONTENT_HINT_ENUM */

#ifndef ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_ENUM
#define ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_ENUM
/**
 * @ingroup iface_zwp_text_input_v2
 * content purpose
 *
 * The content purpose allows to specify the primary purpose of a text
 * input.
 *
 * This allows an input method to show special purpose input panels with
 * extra characters or to disallow some characters.
 */
enum zwp_text_input_v2_content_purpose {
	/**
	 * default input, allowing all characters
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_NORMAL = 0,
	/**
	 * allow only alphabetic characters
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_ALPHA = 1,
	/**
	 * allow only digits
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_DIGITS = 2,
	/**
	 * input a number (including decimal separator and sign)
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_NUMBER = 3,
	/**
	 * input a phone number
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_PHONE = 4,
	/**
	 * input an URL
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_URL = 5,
	/**
	 * input an email address
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_EMAIL = 6,
	/**
	 * input a name of a person
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_NAME = 7,
	/**
	 * input a password (combine with password or sensitive_data hint)
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_PASSWORD = 8,
	/**
	 * input a date
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_DATE = 9,
	/**
	 * input a time
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_TIME = 10,
	/**
	 * input a date and time
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_DATETIME = 11,
	/**
	 * input for a terminal
	 */
	ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_TERMINAL = 12,
};
#endif /* ZWP_TEXT_INPUT_V2_CONTENT_PURPOSE_ENUM */

#ifndef ZWP_TEXT_INPUT_V2_UPDATE_STATE_ENUM
#define ZWP_TEXT_INPUT_V2_UPDATE_STATE_ENUM
/**
 * @ingroup iface_zwp_text_input_v2
 * update_state flags
 *
 * Defines the reason for sending an updated state.
 */
enum zwp_text_input_v2_update_state {
	/**
	 * updated state because it changed
	 */
	ZWP_TEXT_INPUT_V2_UPDATE_STATE_CHANGE = 0,
	/**
	 * full state after enter or input_method_changed event
	 */
	ZWP_TEXT_INPUT_V2_UPDATE_STATE_FULL = 1,
	/**
	 * full state after reset
	 */
	ZWP_TEXT_INPUT_V2_UPDATE_STATE_RESET = 2,
	/**
	 * full state after switching focus to a different widget on client side
	 */
	ZWP_TEXT_INPUT_V2_UPDATE_STATE_ENTER = 3,
};
#endif /* ZWP_TEXT_INPUT_V2_UPDATE_STATE_ENUM */

#ifndef ZWP_TEXT_INPUT_V2_INPUT_PANEL_VISIBILITY_ENUM
#define ZWP_TEXT_INPUT_V2_INPUT_PANEL_VISIBILITY_ENUM
enum zwp_text_input_v2_input_panel_visibility {
	/**
	 * the input panel (virtual keyboard) is hidden
	 */
	ZWP_TEXT_INPUT_V2_INPUT_PANEL_VISIBILITY_HIDDEN = 0,
	/**
	 * the input panel (virtual keyboard) is visible
	 */
	ZWP_TEXT_INPUT_V2_INPUT_PANEL_VISIBILITY_VISIBLE = 1,
};
#endif /* ZWP_TEXT_INPUT_V2_INPUT_PANEL_VISIBILITY_ENUM */

#ifndef ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_ENUM
#define ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_ENUM
enum zwp_text_input_v2_preedit_style {
	/**
	 * default style for composing text
	 */
	ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_DEFAULT = 0,
	/**
	 * composing text should be shown the same as non-composing text
	 */
	ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_NONE = 1,
	/**
	 * composing text might be bold
	 */
	ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_ACTIVE = 2,
	/**
	 * composing text might be cursive
	 */
	ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_INACTIVE = 3,
	/**
	 * composing text might have a different background color
	 */
	ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_HIGHLIGHT = 4,
	/**
	 * composing text might be underlined
	 */
	ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_UNDERLINE = 5,
	/**
	 * composing text should be shown the same as selected text
	 */
	ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_SELECTION = 6,
	/**
	 * composing text might be underlined with a red wavy line
	 */
	ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_INCORRECT = 7,
};
#endif /* ZWP_TEXT_INPUT_V2_PREEDIT_STYLE_ENUM */

#ifndef ZWP_TEXT_INPUT_V2_TEXT_DIRECTION_ENUM
#define ZWP_TEXT_INPUT_V2_TEXT_DIRECTION_ENUM
enum zwp_text_input_v2_text_direction {
	/**
	 * automatic text direction based on text and language
	 */
	ZWP_TEXT_INPUT_V2_TEXT_DIRECTION_AUTO = 0,
	/**
	 * left-to-right
	 */
	ZWP_TEXT_INPUT_V2_TEXT_DIRECTION_LTR = 1,
	/**
	 * right-to-left
	 */
	ZWP_TEXT_INPUT_V2_TEXT_DIRECTION_RTL = 2,
};
#endif /* ZWP_TEXT_INPUT_V2_TEXT_DIRECTION_ENUM */

/**
 * @ingroup iface_zwp_text_input_v2
 * @struct zwp_text_input_v2_listener
 */
struct zwp_text_input_v2_listener {
	/**
	 * enter event
	 *
	 * Notification that this seat's text-input focus is on a certain
	 * surface.
	 *
	 * When the seat has the keyboard capability the text-input focus
	 * follows the keyboard focus.
	 * @param serial serial to be used by update_state
	 */
	void (*enter)(void *data,
		      struct zwp_text_input_v2 *zwp_text_input_v2,
		      uint32_t serial,
		      struct wl_surface *surface);
	/**
	 * leave event
	 *
	 * Notification that this seat's text-input focus is no longer on
	 * a certain surface.
	 *
	 * The leave notification is sent before the enter notification for
	 * the new focus.
	 *
	 * When the seat has the keyboard capabillity the text-input focus
	 * follows the keyboard focus.
	 */
	void (*leave)(void *data,
		      struct zwp_text_input_v2 *zwp_text_input_v2,
		      uint32_t serial,
		      struct wl_surface *surface);
	/**
	 * state of the input panel
	 *
	 * Notification that the visibility of the input panel (virtual
	 * keyboard) changed.
	 *
	 * The rectangle x, y, width, height defines the area overlapped by
	 * the input panel (virtual keyboard) on the surface having the
	 * text focus in surface local coordinates.
	 *
	 * That can be used to make sure widgets are visible and not
	 * covered by a virtual keyboard.
	 */
	void (*input_panel_state)(void *data,
				  struct zwp_text_input_v2 *zwp_text_input_v2,
				  uint32_t state,
				  int32_t x,
				  int32_t y,
				  int32_t width,
				  int32_t height);
	/**
	 * pre-edit
	 *
	 * Notify when a new composing text (pre-edit) should be set
	 * around the current cursor position. Any previously set composing
	 * text should be removed.
	 *
	 * The commit text can be used to replace the composing text in
	 * some cases (for example when losing focus).
	 *
	 * The text input should also handle all preedit_style and
	 * preedit_cursor events occurring directly before preedit_string.
	 */
	void (*preedit_string)(void *data,
			       struct zwp_text_input_v2 *zwp_text_input_v2,
			       const char *text,
			       const char *commit);
	/**
	 * pre-edit styling
	 *
	 * Sets styling information on composing text. The style is
	 * applied for length bytes from index relative to the beginning of
	 * the composing text (as byte offset). Multiple styles can be
	 * applied to a composing text by sending multiple preedit_styling
	 * events.
	 *
	 * This event is handled as part of a following preedit_string
	 * event.
	 */
	void (*preedit_styling)(void *data,
				struct zwp_text_input_v2 *zwp_text_input_v2,
				uint32_t index,
				uint32_t length,
				uint32_t style);
	/**
	 * pre-edit cursor
	 *
	 * Sets the cursor position inside the composing text (as byte
	 * offset) relative to the start of the composing text. When index
	 * is a negative number no cursor is shown.
	 *
	 * When no preedit_cursor event is sent the cursor will be at the
	 * end of the composing text by default.
	 *
	 * This event is handled as part of a following preedit_string
	 * event.
	 */
	void (*preedit_cursor)(void *data,
			       struct zwp_text_input_v2 *zwp_text_input_v2,
			       int32_t index);
	/**
	 * commit
	 *
	 * Notify when text should be inserted into the editor widget.
	 * The text to commit could be either just a single character after
	 * a key press or the result of some composing (pre-edit). It could
	 * be also an empty text when some text should be removed (see
	 * delete_surrounding_text) or when the input cursor should be
	 * moved (see cursor_position).
	 *
	 * Any previously set composing text should be removed.
	 */
	void (*commit_string)(void *data,
			      struct zwp_text_input_v2 *zwp_text_input_v2,
			      const char *text);
	/**
	 * set cursor to new position
	 *
	 * Notify when the cursor or anchor position should be modified.
	 *
	 * This event should be handled as part of a following
	 * commit_string event.
	 *
	 * The text between anchor and index should be selected.
	 * @param index position of cursor
	 * @param anchor position of selection anchor
	 */
	void (*cursor_position)(void *data,
				struct zwp_text_input_v2 *zwp_text_input_v2,
				int32_t index,
				int32_t anchor);
	/**
	 * delete surrounding text
	 *
	 * Notify when the text around the current cursor position should
	 * be deleted. BeforeLength and afterLength is the length (in
	 * bytes) of text before and after the current cursor position
	 * (excluding the selection) to delete.
	 *
	 * This event should be handled as part of a following
	 * commit_string or preedit_string event.
	 * @param before_length length of text before current cursor positon
	 * @param after_length length of text after current cursor positon
	 */
	void (*delete_surrounding_text)(void *data,
					struct zwp_text_input_v2 *zwp_text_input_v2,
					uint32_t before_length,
					uint32_t after_length);
	/**
	 * modifiers map
	 *
	 * Transfer an array of 0-terminated modifiers names. The
	 * position in the array is the index of the modifier as used in
	 * the modifiers bitmask in the keysym event.
	 */
	void (*modifiers_map)(void *data,
			      struct zwp_text_input_v2 *zwp_text_input_v2,
			      struct wl_array *map);
	/**
	 * keysym
	 *
	 * Notify when a key event was sent. Key events should not be
	 * used for normal text input operations, which should be done with
	 * commit_string, delete_surrounding_text, etc. The key event
	 * follows the wl_keyboard key event convention. Sym is a XKB
	 * keysym, state a wl_keyboard key_state. Modifiers are a mask for
	 * effective modifiers (where the modifier indices are set by the
	 * modifiers_map event)
	 */
	void (*keysym)(void *data,
		       struct zwp_text_input_v2 *zwp_text_input_v2,
		       uint32_t time,
		       uint32_t sym,
		       uint32_t state,
		       uint32_t modifiers);
	/**
	 * language
	 *
	 * Sets the language of the input text. The "language" argument
	 * is a RFC-3066 format language tag.
	 */
	void (*language)(void *data,
			 struct zwp_text_input_v2 *zwp_text_input_v2,
			 const char *language);
	/**
	 * text direction
	 *
	 * Sets the text direction of input text.
	 *
	 * It is mainly needed for showing input cursor on correct side of
	 * the editor when there is no input yet done and making sure
	 * neutral direction text is laid out properly.
	 */
	void (*text_direction)(void *data,
			       struct zwp_text_input_v2 *zwp_text_input_v2,
			       uint32_t direction);
	/**
	 * configure amount of surrounding text to be sent
	 *
	 * Configure what amount of surrounding text is expected by the
	 * input method. The surrounding text will be sent in the
	 * set_surrounding_text request on the following state information
	 * updates.
	 */
	void (*configure_surrounding_text)(void *data,
					   struct zwp_text_input_v2 *zwp_text_input_v2,
					   int32_t before_cursor,
					   int32_t after_cursor);
	/**
	 * Notifies about a changed input method
	 *
	 * The input method changed on compositor side, which invalidates
	 * all current state information. New state information should be
	 * sent from the client via state requests (set_surrounding_text,
	 * set_content_hint, ...) and update_state.
	 * @param serial serial to be used by update_state
	 * @param flags currently unused
	 */
	void (*input_method_changed)(void *data,
				     struct zwp_text_input_v2 *zwp_text_input_v2,
				     uint32_t serial,
				     uint32_t flags);
};

/**
 * @ingroup zwp_text_input_v2_iface
 */
static inline int
zwp_text_input_v2_add_listener(struct zwp_text_input_v2 *zwp_text_input_v2,
			       const struct zwp_text_input_v2_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_text_input_v2,
				     (void (**)(void)) listener, data);
}

#define ZWP_TEXT_INPUT_V2_DESTROY	0
#define ZWP_TEXT_INPUT_V2_ENABLE	1
#define ZWP_TEXT_INPUT_V2_DISABLE	2
#define ZWP_TEXT_INPUT_V2_SHOW_INPUT_PANEL	3
#define ZWP_TEXT_INPUT_V2_HIDE_INPUT_PANEL	4
#define ZWP_TEXT_INPUT_V2_SET_SURROUNDING_TEXT	5
#define ZWP_TEXT_INPUT_V2_SET_CONTENT_TYPE	6
#define ZWP_TEXT_INPUT_V2_SET_CURSOR_RECTANGLE	7
#define ZWP_TEXT_INPUT_V2_SET_PREFERRED_LANGUAGE	8
#define ZWP_TEXT_INPUT_V2_UPDATE_STATE	9

/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_DESTROY_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_ENABLE_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_DISABLE_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_SHOW_INPUT_PANEL_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_HIDE_INPUT_PANEL_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_SET_SURROUNDING_TEXT_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_SET_CONTENT_TYPE_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_SET_CURSOR_RECTANGLE_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_SET_PREFERRED_LANGUAGE_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_v2
 */
#define ZWP_TEXT_INPUT_V2_UPDATE_STATE_SINCE_VERSION	1

/** @ingroup iface_zwp_text_input_v2 */
static inline void
zwp_text_input_v2_set_user_data(struct zwp_text_input_v2 *zwp_text_input_v2, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_text_input_v2, user_data);
}

/** @ingroup iface_zwp_text_input_v2 */
static inline void *
zwp_text_input_v2_get_user_data(struct zwp_text_input_v2 *zwp_text_input_v2)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_text_input_v2);
}

static inline uint32_t
zwp_text_input_v2_get_version(struct zwp_text_input_v2 *zwp_text_input_v2)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_text_input_v2);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Destroy the wp_text_input object. Also disables all surfaces enabled
 * through this wp_text_input object
 */
static inline void
zwp_text_input_v2_destroy(struct zwp_text_input_v2 *zwp_text_input_v2)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_text_input_v2);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Enable text input in a surface (usually when a text entry inside of it
 * has focus).
 *
 * This can be called before or after a surface gets text (or keyboard)
 * focus via the enter event. Text input to a surface is only active
 * when it has the current text (or keyboard) focus and is enabled.
 */
static inline void
zwp_text_input_v2_enable(struct zwp_text_input_v2 *zwp_text_input_v2, struct wl_surface *surface)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_ENABLE, surface);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Disable text input in a surface (typically when there is no focus on any
 * text entry inside the surface).
 */
static inline void
zwp_text_input_v2_disable(struct zwp_text_input_v2 *zwp_text_input_v2, struct wl_surface *surface)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_DISABLE, surface);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Requests input panels (virtual keyboard) to show.
 *
 * This should be used for example to show a virtual keyboard again
 * (with a tap) after it was closed by pressing on a close button on the
 * keyboard.
 */
static inline void
zwp_text_input_v2_show_input_panel(struct zwp_text_input_v2 *zwp_text_input_v2)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_SHOW_INPUT_PANEL);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Requests input panels (virtual keyboard) to hide.
 */
static inline void
zwp_text_input_v2_hide_input_panel(struct zwp_text_input_v2 *zwp_text_input_v2)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_HIDE_INPUT_PANEL);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Sets the plain surrounding text around the input position. Text is
 * UTF-8 encoded. Cursor is the byte offset within the surrounding text.
 * Anchor is the byte offset of the selection anchor within the
 * surrounding text. If there is no selected text, anchor is the same as
 * cursor.
 *
 * Make sure to always send some text before and after the cursor
 * except when the cursor is at the beginning or end of text.
 *
 * When there was a configure_surrounding_text event take the
 * before_cursor and after_cursor arguments into account for picking how
 * much surrounding text to send.
 *
 * There is a maximum length of wayland messages so text can not be
 * longer than 4000 bytes.
 */
static inline void
zwp_text_input_v2_set_surrounding_text(struct zwp_text_input_v2 *zwp_text_input_v2, const char *text, int32_t cursor, int32_t anchor)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_SET_SURROUNDING_TEXT, text, cursor, anchor);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Sets the content purpose and content hint. While the purpose is the
 * basic purpose of an input field, the hint flags allow to modify some
 * of the behavior.
 *
 * When no content type is explicitly set, a normal content purpose with
 * none hint should be assumed.
 */
static inline void
zwp_text_input_v2_set_content_type(struct zwp_text_input_v2 *zwp_text_input_v2, uint32_t hint, uint32_t purpose)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_SET_CONTENT_TYPE, hint, purpose);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Sets the cursor outline as a x, y, width, height rectangle in surface
 * local coordinates.
 *
 * Allows the compositor to put a window with word suggestions near the
 * cursor.
 */
static inline void
zwp_text_input_v2_set_cursor_rectangle(struct zwp_text_input_v2 *zwp_text_input_v2, int32_t x, int32_t y, int32_t width, int32_t height)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_SET_CURSOR_RECTANGLE, x, y, width, height);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Sets a specific language. This allows for example a virtual keyboard to
 * show a language specific layout. The "language" argument is a RFC-3066
 * format language tag.
 *
 * It could be used for example in a word processor to indicate language of
 * currently edited document or in an instant message application which
 * tracks languages of contacts.
 */
static inline void
zwp_text_input_v2_set_preferred_language(struct zwp_text_input_v2 *zwp_text_input_v2, const char *language)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_SET_PREFERRED_LANGUAGE, language);
}

/**
 * @ingroup iface_zwp_text_input_v2
 *
 * Allows to atomically send state updates from client.
 *
 * This request should follow after a batch of state updating requests
 * like set_surrounding_text, set_content_type, set_cursor_rectangle and
 * set_preferred_language.
 *
 * The flags field indicates why an updated state is sent to the input
 * method.
 *
 * Reset should be used by an editor widget after the text was changed
 * outside of the normal input method flow.
 *
 * For "change" it is enough to send the changed state, else the full
 * state should be send.
 *
 * Serial should be set to the serial from the last enter or
 * input_method_changed event.
 *
 * To make sure to not receive outdated input method events after a
 * reset or switching to a new widget wl_display_sync() should be used
 * after update_state in these cases.
 */
static inline void
zwp_text_input_v2_update_state(struct zwp_text_input_v2 *zwp_text_input_v2, uint32_t serial, uint32_t reason)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_v2,
			 ZWP_TEXT_INPUT_V2_UPDATE_STATE, serial, reason);
}

#define ZWP_TEXT_INPUT_MANAGER_V2_DESTROY	0
#define ZWP_TEXT_INPUT_MANAGER_V2_GET_TEXT_INPUT	1

/**
 * @ingroup iface_zwp_text_input_manager_v2
 */
#define ZWP_TEXT_INPUT_MANAGER_V2_DESTROY_SINCE_VERSION	1
/**
 * @ingroup iface_zwp_text_input_manager_v2
 */
#define ZWP_TEXT_INPUT_MANAGER_V2_GET_TEXT_INPUT_SINCE_VERSION	1

/** @ingroup iface_zwp_text_input_manager_v2 */
static inline void
zwp_text_input_manager_v2_set_user_data(struct zwp_text_input_manager_v2 *zwp_text_input_manager_v2, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_text_input_manager_v2, user_data);
}

/** @ingroup iface_zwp_text_input_manager_v2 */
static inline void *
zwp_text_input_manager_v2_get_user_data(struct zwp_text_input_manager_v2 *zwp_text_input_manager_v2)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_text_input_manager_v2);
}

static inline uint32_t
zwp_text_input_manager_v2_get_version(struct zwp_text_input_manager_v2 *zwp_text_input_manager_v2)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_text_input_manager_v2);
}

/**
 * @ingroup iface_zwp_text_input_manager_v2
 *
 * Destroy the wp_text_input_manager object.
 */
static inline void
zwp_text_input_manager_v2_destroy(struct zwp_text_input_manager_v2 *zwp_text_input_manager_v2)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_text_input_manager_v2,
			 ZWP_TEXT_INPUT_MANAGER_V2_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_text_input_manager_v2);
}

/**
 * @ingroup iface_zwp_text_input_manager_v2
 *
 * Creates a new text-input object for a given seat.
 */
static inline struct zwp_text_input_v2 *
zwp_text_input_manager_v2_get_text_input(struct zwp_text_input_manager_v2 *zwp_text_input_manager_v2, struct wl_seat *seat)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_text_input_manager_v2,
			 ZWP_TEXT_INPUT_MANAGER_V2_GET_TEXT_INPUT, &zwp_text_input_v2_interface, NULL, seat);

	return (struct zwp_text_input_v2 *) id;
}

#ifdef  __cplusplus
}
#endif

#endif
