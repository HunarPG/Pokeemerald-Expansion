.set LOCALID_RIVAL, 4

TwinLeafTown_MapScripts::
	.2byte 0

TwinLeafTown_EventScript_Fat_MAN::
	msgbox TwinLeafTown_EventScript_Fat_MAN_Text, MSGBOX_NPC
	end

TwinLeafTown_EventScript_LADY::
	msgbox TwinLeafTown_EventScript_LADY_Text, MSGBOX_NPC
	end

TwinLeafTown_EventScript_Sign::
	msgbox TwinLeafTown_EventScript_Sign_Text, MSGBOX_SIGN
	end

TwinLeafTown_EventScript_Guy::
	compare VAR_RIVAL_MOM_TEXT, 0 
	goto_if_eq TwinLeafTown_EventScript_Guy_1
	compare VAR_RIVAL_MOM_TEXT, 1
	goto_if_eq TwinLeafTown_EventScript_Guy_2

TwinLeafTown_EventScript_Guy_1:
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
	end

TwinLeafTown_EventScript_Guy_2:
	msgbox TwinLeafTown_EventScript_Guy_Text_1, MSGBOX_NPC
	end

TwinLeafTown_EventScript_Players_House_Sign::
	msgbox TwinLeafTown_EventScript_Players_House_Sign_Text, MSGBOX_SIGN
	end

TwinLeafTown_EventScript_Barrys_House_Sign::
	msgbox TwinLeafTown_EventScript_Players_House_Sign_Text, MSGBOX_SIGN
	end

TwinLeafTown_EventScript_Barry::
    lock
	setflag FLAG_HIDE_ROUTE_201_ROWANS_BAG
	setflag FLAG_HIDE_ROWAN_ROUTE_201
	setflag FLAG_HIDE_LUCAS_ROUTE_201
	setflag FLAG_HIDE_DAWN_ROUTE_201
	showobjectat LOCALID_RIVAL, MAP_TWIN_LEAF_TOWN
	playse SE_DOOR
	applymovement 4, Movement_Rival_opens_door
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_step_back
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Thud_Text, MSGBOX_DEFAULT
	closemessage
    playse SE_PIN
    applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
	fadenewbgm MUS_DP_RIVAL
	msgbox TwinLeafTown_EventScript_Rival_Talk_Text, MSGBOX_DEFAULT
	closemessage
	release
	lock
	applymovement 4, Movement_Rival_Goes_Till_SignPost
	waitmovement 0
    playse SE_PIN
    applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
	applymovement 4, Movement_Rival_Comes_Back_From_SignPost
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Rival_Go_Back_In_Text, MSGBOX_DEFAULT
	closemessage
	applymovement 4, Movement_Rival_Goes_In_House
	waitmovement 0
	playse SE_DOOR
	removeobject 4
	setvar VAR_MET_RIVAL_IN_TWINLEAF, 1
	fadedefaultbgm
	release
	end

TwinLeafTown_EventScript_Guy_Stop_You_1::
    lock
    applymovement 3, Movement_Guy_Faces_Up
	waitmovement 0
    playse SE_PIN
    applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
    applymovement 3, Movement_Guy_Comes_To_You_1
	waitmovement 0
    applymovement 3, Movement_Guy_Pushes_You
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Get_Pushed_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Face_Up
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
    applymovement 3, Movement_Guy_Goes_Back_1
	waitmovement 0
	release
	end

TwinLeafTown_EventScript_Guy_Stop_You_2::
    lock
    applymovement 3, Movement_Guy_Faces_Up
	waitmovement 0
    playse SE_PIN
    applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
    applymovement 3, Movement_Guy_Comes_To_You_2
	waitmovement 0
    applymovement 3, Movement_Guy_Pushes_You
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Get_Pushed_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Face_Up
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
    applymovement 3, Movement_Guy_Goes_Back_2
	waitmovement 0
	release
	end

TwinLeafTown_EventScript_Guy_Stop_You_3::
    lock
    applymovement 3, Movement_Guy_Faces_Up
	waitmovement 0
    playse SE_PIN
    applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
    applymovement 3, Movement_Guy_Comes_To_You_3
	waitmovement 0
    applymovement 3, Movement_Guy_Pushes_You
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Get_Pushed_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Face_Up
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
    applymovement 3, Movement_Guy_Goes_Back_3
	waitmovement 0
	release
	end

TwinLeafTown_EventScript_Guy_Stop_You_4::
    lock
    applymovement 3, Movement_Guy_Faces_Up
	waitmovement 0
    playse SE_PIN
    applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
    applymovement 3, Movement_Guy_Comes_To_You_4
	waitmovement 0
    applymovement 3, Movement_Guy_Pushes_You
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Get_Pushed_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Face_Up
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
    applymovement 3, Movement_Guy_Goes_Back_4
	waitmovement 0
	release
	end

TwinLeafTown_EventScript_Guy_Stop_You_5::
    lock
    applymovement 3, Movement_Guy_Faces_Up
	waitmovement 0
    playse SE_PIN
    applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
    applymovement 3, Movement_Guy_Comes_To_You_5
	waitmovement 0
    applymovement 3, Movement_Guy_Pushes_You
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Get_Pushed_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Face_Up
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
    applymovement 3, Movement_Guy_Goes_Back_5
	waitmovement 0
	release
	end

TwinLeafTown_EventScript_Guy_Stop_You_6::
    lock
    applymovement 3, Movement_Guy_Faces_Up
	waitmovement 0
    playse SE_PIN
    applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
    applymovement 3, Movement_Guy_Comes_To_You_6
	waitmovement 0
    applymovement 3, Movement_Guy_Pushes_You
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Get_Pushed_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Face_Up
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
    applymovement 3, Movement_Guy_Goes_Back_6
	waitmovement 0
	release
	end

TwinLeafTown_EventScript_Guy_Stop_You_7::
    lock
    applymovement 3, Movement_Guy_Faces_Up
	waitmovement 0
    playse SE_PIN
    applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
    applymovement 3, Movement_Guy_Comes_To_You_7
	waitmovement 0
    applymovement 3, Movement_Guy_Pushes_You
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Get_Pushed_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Face_Up
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
    applymovement 3, Movement_Guy_Goes_Back_7
	waitmovement 0
	release
	end

TwinLeafTown_EventScript_Guy_Stop_You_8::
    lock
    applymovement 3, Movement_Guy_Faces_Up
	waitmovement 0
    playse SE_PIN
    applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
    applymovement 3, Movement_Guy_Comes_To_You_8
	waitmovement 0
    applymovement 3, Movement_Guy_Pushes_You
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Get_Pushed_Down
    applymovement OBJ_EVENT_ID_PLAYER, Movement_You_Face_Up
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox TwinLeafTown_EventScript_Guy_Text_0, MSGBOX_NPC
    applymovement 3, Movement_Guy_Goes_Back_8
	waitmovement 0
	release
	end

TwinLeafTown_EventScript_Fat_MAN_Text:
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinLeafTown_EventScript_LADY_Text:
	.string "It's true that wild Pokdmon do attack\n"
	.string "people sometimes...\p"
	.string "But, Pokemon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinLeafTown_EventScript_Sign_Text:
	.string "Twinleaf Town\n"
    .string "Fresh and Free!$"

TwinLeafTown_EventScript_Guy_Text_0:
	.string "Hiya, {PLAYER}.\n"
	.string "{B_RIVAL_NAME} was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"

TwinLeafTown_EventScript_Guy_Text_1:
	.string "Hiya, {PLAYER}.\n"
	.string "You are looking for {B_RIVAL_NAME}?\p"
	.string "He just went tearing of a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

TwinLeafTown_EventScript_Players_House_Sign_Text:
    .string "{PLAYER}'s House$"

TwinLeafTown_EventScript_Barrys_House_Sign_Text:
    .string "{B_RIVAL_NAME}'s House$"

TwinLeafTown_EventScript_Thud_Text:
    .string "Thud!!$"

TwinLeafTown_EventScript_Rival_Talk_Text:
    .string "{B_RIVAL_NAME}: What was that about?!\p"
    .string "Oh, hey, {PLAYER}!\p"
    .string "Hey! I'm going to see Prof. Rowan!\n"
    .string "You should come, too! And quickly!$"

TwinLeafTown_EventScript_Rival_Go_Back_In_Text:
    .string "{B_RIVAL_NAME}: Oh, jeez!\n"
    .string "Forgot something!$"

Movement_Rival_opens_door:
	walk_fast_down
	step_end

Movement_step_back:
    walk_fast_down
	face_up
	step_end

Movement_Rival_Goes_Till_SignPost:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
	step_end

Movement_Rival_Comes_Back_From_SignPost:
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
	face_down
	step_end

Movement_Rival_Goes_In_House:
    walk_fast_up
	step_end

Movement_Guy_Faces_Up:
	face_up
	step_end

Movement_Guy_Pushes_You:
    walk_fast_down
	step_end

Movement_You_Get_Pushed_Down:
    jump_down
	step_end

Movement_You_Face_Up:
	face_up
	step_end

Movement_Guy_Comes_To_You_1:
    walk_fast_up
    walk_fast_up
    walk_fast_right
    walk_fast_up
    walk_fast_up
    walk_fast_left
	face_down
	step_end

Movement_Guy_Comes_To_You_2:
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_right
	face_down
	step_end

Movement_Guy_Comes_To_You_3:
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_right
    walk_fast_right
	face_down
	step_end

Movement_Guy_Comes_To_You_4:
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_right
    walk_fast_right
    walk_fast_right
	face_down
	step_end

Movement_Guy_Comes_To_You_5:
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
	face_down
	step_end

Movement_Guy_Comes_To_You_6:
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
	face_down
	step_end

Movement_Guy_Comes_To_You_7:
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
	face_down
	step_end

Movement_Guy_Comes_To_You_8:
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
	face_down
	step_end

Movement_Guy_Goes_Back_1:
    walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	step_end
	step_end

Movement_Guy_Goes_Back_2:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Movement_Guy_Goes_Back_3:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Movement_Guy_Goes_Back_4:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Movement_Guy_Goes_Back_5:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Movement_Guy_Goes_Back_6:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Movement_Guy_Goes_Back_7:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Movement_Guy_Goes_Back_8:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end
