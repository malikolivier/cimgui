//This file is automatically generated by generator.lua from https://github.com/cimgui/cimgui
//based on imgui.h file version "1.66 WIP" from Dear ImGui https://github.com/ocornut/imgui
#include "./imgui/imgui.h"
#include "cimgui.h"

#include "./imgui/imgui_internal.h"

CIMGUI_API void igDestroyContext(ImGuiContext* ctx)
{
    return ImGui::DestroyContext(ctx);
}
CIMGUI_API ImGuiContext* igGetCurrentContext()
{
    return ImGui::GetCurrentContext();
}
CIMGUI_API void igSetCurrentContext(ImGuiContext* ctx)
{
    return ImGui::SetCurrentContext(ctx);
}
CIMGUI_API bool igDebugCheckVersionAndDataLayout(const char* version_str,size_t sz_io,size_t sz_style,size_t sz_vec2,size_t sz_vec4,size_t sz_drawvert)
{
    return ImGui::DebugCheckVersionAndDataLayout(version_str,sz_io,sz_style,sz_vec2,sz_vec4,sz_drawvert);
}
CIMGUI_API ImGuiIO* igGetIO()
{
    return &ImGui::GetIO();
}
CIMGUI_API ImGuiStyle* igGetStyle()
{
    return &ImGui::GetStyle();
}
CIMGUI_API void igNewFrame()
{
    return ImGui::NewFrame();
}
CIMGUI_API void igEndFrame()
{
    return ImGui::EndFrame();
}
CIMGUI_API void igRender()
{
    return ImGui::Render();
}
CIMGUI_API ImDrawData* igGetDrawData()
{
    return ImGui::GetDrawData();
}
CIMGUI_API void igShowMetricsWindow(bool* p_open)
{
    return ImGui::ShowMetricsWindow(p_open);
}
CIMGUI_API void igShowStyleEditor(ImGuiStyle* ref)
{
    return ImGui::ShowStyleEditor(ref);
}
CIMGUI_API bool igShowStyleSelector(const char* label)
{
    return ImGui::ShowStyleSelector(label);
}
CIMGUI_API void igShowFontSelector(const char* label)
{
    return ImGui::ShowFontSelector(label);
}
CIMGUI_API void igShowUserGuide()
{
    return ImGui::ShowUserGuide();
}
CIMGUI_API const char* igGetVersion()
{
    return ImGui::GetVersion();
}
CIMGUI_API void igStyleColorsClassic(ImGuiStyle* dst)
{
    return ImGui::StyleColorsClassic(dst);
}
CIMGUI_API void igStyleColorsLight(ImGuiStyle* dst)
{
    return ImGui::StyleColorsLight(dst);
}
CIMGUI_API void igEnd()
{
    return ImGui::End();
}
CIMGUI_API bool igBeginChild(const char* str_id,const ImVec2 size,bool border,ImGuiWindowFlags flags)
{
    return ImGui::BeginChild(str_id,size,border,flags);
}
CIMGUI_API bool igBeginChildID(ImGuiID id,const ImVec2 size,bool border,ImGuiWindowFlags flags)
{
    return ImGui::BeginChild(id,size,border,flags);
}
CIMGUI_API void igEndChild()
{
    return ImGui::EndChild();
}
CIMGUI_API bool igIsWindowAppearing()
{
    return ImGui::IsWindowAppearing();
}
CIMGUI_API bool igIsWindowCollapsed()
{
    return ImGui::IsWindowCollapsed();
}
CIMGUI_API bool igIsWindowFocused(ImGuiFocusedFlags flags)
{
    return ImGui::IsWindowFocused(flags);
}
CIMGUI_API bool igIsWindowHovered(ImGuiHoveredFlags flags)
{
    return ImGui::IsWindowHovered(flags);
}
CIMGUI_API ImDrawList* igGetWindowDrawList()
{
    return ImGui::GetWindowDrawList();
}
CIMGUI_API ImVec2 igGetWindowPos()
{
    return ImGui::GetWindowPos();
}
CIMGUI_API ImVec2 igGetWindowSize()
{
    return ImGui::GetWindowSize();
}
CIMGUI_API float igGetWindowWidth()
{
    return ImGui::GetWindowWidth();
}
CIMGUI_API float igGetWindowHeight()
{
    return ImGui::GetWindowHeight();
}
CIMGUI_API ImVec2 igGetContentRegionMax()
{
    return ImGui::GetContentRegionMax();
}
CIMGUI_API ImVec2 igGetContentRegionAvail()
{
    return ImGui::GetContentRegionAvail();
}
CIMGUI_API float igGetContentRegionAvailWidth()
{
    return ImGui::GetContentRegionAvailWidth();
}
CIMGUI_API ImVec2 igGetWindowContentRegionMin()
{
    return ImGui::GetWindowContentRegionMin();
}
CIMGUI_API ImVec2 igGetWindowContentRegionMax()
{
    return ImGui::GetWindowContentRegionMax();
}
CIMGUI_API float igGetWindowContentRegionWidth()
{
    return ImGui::GetWindowContentRegionWidth();
}
CIMGUI_API void igSetNextWindowPos(const ImVec2 pos,ImGuiCond cond,const ImVec2 pivot)
{
    return ImGui::SetNextWindowPos(pos,cond,pivot);
}
CIMGUI_API void igSetNextWindowSize(const ImVec2 size,ImGuiCond cond)
{
    return ImGui::SetNextWindowSize(size,cond);
}
CIMGUI_API void igSetNextWindowContentSize(const ImVec2 size)
{
    return ImGui::SetNextWindowContentSize(size);
}
CIMGUI_API void igSetNextWindowCollapsed(bool collapsed,ImGuiCond cond)
{
    return ImGui::SetNextWindowCollapsed(collapsed,cond);
}
CIMGUI_API void igSetNextWindowFocus()
{
    return ImGui::SetNextWindowFocus();
}
CIMGUI_API void igSetNextWindowBgAlpha(float alpha)
{
    return ImGui::SetNextWindowBgAlpha(alpha);
}
CIMGUI_API void igSetWindowPosVec2(const ImVec2 pos,ImGuiCond cond)
{
    return ImGui::SetWindowPos(pos,cond);
}
CIMGUI_API void igSetWindowSizeVec2(const ImVec2 size,ImGuiCond cond)
{
    return ImGui::SetWindowSize(size,cond);
}
CIMGUI_API void igSetWindowCollapsedBool(bool collapsed,ImGuiCond cond)
{
    return ImGui::SetWindowCollapsed(collapsed,cond);
}
CIMGUI_API void igSetWindowFocus()
{
    return ImGui::SetWindowFocus();
}
CIMGUI_API void igSetWindowFontScale(float scale)
{
    return ImGui::SetWindowFontScale(scale);
}
CIMGUI_API void igSetWindowPosStr(const char* name,const ImVec2 pos,ImGuiCond cond)
{
    return ImGui::SetWindowPos(name,pos,cond);
}
CIMGUI_API void igSetWindowSizeStr(const char* name,const ImVec2 size,ImGuiCond cond)
{
    return ImGui::SetWindowSize(name,size,cond);
}
CIMGUI_API void igSetWindowCollapsedStr(const char* name,bool collapsed,ImGuiCond cond)
{
    return ImGui::SetWindowCollapsed(name,collapsed,cond);
}
CIMGUI_API void igSetWindowFocusStr(const char* name)
{
    return ImGui::SetWindowFocus(name);
}
CIMGUI_API float igGetScrollX()
{
    return ImGui::GetScrollX();
}
CIMGUI_API float igGetScrollY()
{
    return ImGui::GetScrollY();
}
CIMGUI_API float igGetScrollMaxX()
{
    return ImGui::GetScrollMaxX();
}
CIMGUI_API float igGetScrollMaxY()
{
    return ImGui::GetScrollMaxY();
}
CIMGUI_API void igSetScrollX(float scroll_x)
{
    return ImGui::SetScrollX(scroll_x);
}
CIMGUI_API void igSetScrollY(float scroll_y)
{
    return ImGui::SetScrollY(scroll_y);
}
CIMGUI_API void igSetScrollHereY(float center_y_ratio)
{
    return ImGui::SetScrollHereY(center_y_ratio);
}
CIMGUI_API void igSetScrollFromPosY(float pos_y,float center_y_ratio)
{
    return ImGui::SetScrollFromPosY(pos_y,center_y_ratio);
}
CIMGUI_API void igPushFont(ImFont* font)
{
    return ImGui::PushFont(font);
}
CIMGUI_API void igPopFont()
{
    return ImGui::PopFont();
}
CIMGUI_API void igPushStyleColorU32(ImGuiCol idx,ImU32 col)
{
    return ImGui::PushStyleColor(idx,col);
}
CIMGUI_API void igPushStyleColor(ImGuiCol idx,const ImVec4 col)
{
    return ImGui::PushStyleColor(idx,col);
}
CIMGUI_API void igPopStyleColor(int count)
{
    return ImGui::PopStyleColor(count);
}
CIMGUI_API void igPushStyleVarFloat(ImGuiStyleVar idx,float val)
{
    return ImGui::PushStyleVar(idx,val);
}
CIMGUI_API void igPushStyleVarVec2(ImGuiStyleVar idx,const ImVec2 val)
{
    return ImGui::PushStyleVar(idx,val);
}
CIMGUI_API void igPopStyleVar(int count)
{
    return ImGui::PopStyleVar(count);
}
CIMGUI_API const ImVec4* igGetStyleColorVec4(ImGuiCol idx)
{
    return &ImGui::GetStyleColorVec4(idx);
}
CIMGUI_API ImFont* igGetFont()
{
    return ImGui::GetFont();
}
CIMGUI_API float igGetFontSize()
{
    return ImGui::GetFontSize();
}
CIMGUI_API ImVec2 igGetFontTexUvWhitePixel()
{
    return ImGui::GetFontTexUvWhitePixel();
}
CIMGUI_API ImU32 igGetColorU32(ImGuiCol idx,float alpha_mul)
{
    return ImGui::GetColorU32(idx,alpha_mul);
}
CIMGUI_API ImU32 igGetColorU32Vec4(const ImVec4 col)
{
    return ImGui::GetColorU32(col);
}
CIMGUI_API ImU32 igGetColorU32U32(ImU32 col)
{
    return ImGui::GetColorU32(col);
}
CIMGUI_API void igPushItemWidth(float item_width)
{
    return ImGui::PushItemWidth(item_width);
}
CIMGUI_API void igPopItemWidth()
{
    return ImGui::PopItemWidth();
}
CIMGUI_API float igCalcItemWidth()
{
    return ImGui::CalcItemWidth();
}
CIMGUI_API void igPushTextWrapPos(float wrap_pos_x)
{
    return ImGui::PushTextWrapPos(wrap_pos_x);
}
CIMGUI_API void igPopTextWrapPos()
{
    return ImGui::PopTextWrapPos();
}
CIMGUI_API void igPushAllowKeyboardFocus(bool allow_keyboard_focus)
{
    return ImGui::PushAllowKeyboardFocus(allow_keyboard_focus);
}
CIMGUI_API void igPopAllowKeyboardFocus()
{
    return ImGui::PopAllowKeyboardFocus();
}
CIMGUI_API void igPushButtonRepeat(bool repeat)
{
    return ImGui::PushButtonRepeat(repeat);
}
CIMGUI_API void igPopButtonRepeat()
{
    return ImGui::PopButtonRepeat();
}
CIMGUI_API void igSeparator()
{
    return ImGui::Separator();
}
CIMGUI_API void igSameLine(float pos_x,float spacing_w)
{
    return ImGui::SameLine(pos_x,spacing_w);
}
CIMGUI_API void igNewLine()
{
    return ImGui::NewLine();
}
CIMGUI_API void igSpacing()
{
    return ImGui::Spacing();
}
CIMGUI_API void igDummy(const ImVec2 size)
{
    return ImGui::Dummy(size);
}
CIMGUI_API void igIndent(float indent_w)
{
    return ImGui::Indent(indent_w);
}
CIMGUI_API void igUnindent(float indent_w)
{
    return ImGui::Unindent(indent_w);
}
CIMGUI_API void igBeginGroup()
{
    return ImGui::BeginGroup();
}
CIMGUI_API void igEndGroup()
{
    return ImGui::EndGroup();
}
CIMGUI_API ImVec2 igGetCursorPos()
{
    return ImGui::GetCursorPos();
}
CIMGUI_API float igGetCursorPosX()
{
    return ImGui::GetCursorPosX();
}
CIMGUI_API float igGetCursorPosY()
{
    return ImGui::GetCursorPosY();
}
CIMGUI_API void igSetCursorPos(const ImVec2 local_pos)
{
    return ImGui::SetCursorPos(local_pos);
}
CIMGUI_API void igSetCursorPosX(float x)
{
    return ImGui::SetCursorPosX(x);
}
CIMGUI_API void igSetCursorPosY(float y)
{
    return ImGui::SetCursorPosY(y);
}
CIMGUI_API ImVec2 igGetCursorStartPos()
{
    return ImGui::GetCursorStartPos();
}
CIMGUI_API ImVec2 igGetCursorScreenPos()
{
    return ImGui::GetCursorScreenPos();
}
CIMGUI_API void igSetCursorScreenPos(const ImVec2 screen_pos)
{
    return ImGui::SetCursorScreenPos(screen_pos);
}
CIMGUI_API void igAlignTextToFramePadding()
{
    return ImGui::AlignTextToFramePadding();
}
CIMGUI_API float igGetTextLineHeight()
{
    return ImGui::GetTextLineHeight();
}
CIMGUI_API float igGetTextLineHeightWithSpacing()
{
    return ImGui::GetTextLineHeightWithSpacing();
}
CIMGUI_API float igGetFrameHeight()
{
    return ImGui::GetFrameHeight();
}
CIMGUI_API float igGetFrameHeightWithSpacing()
{
    return ImGui::GetFrameHeightWithSpacing();
}
CIMGUI_API void igPushIDStr(const char* str_id)
{
    return ImGui::PushID(str_id);
}
CIMGUI_API void igPushIDRange(const char* str_id_begin,const char* str_id_end)
{
    return ImGui::PushID(str_id_begin,str_id_end);
}
CIMGUI_API void igPushIDPtr(const void* ptr_id)
{
    return ImGui::PushID(ptr_id);
}
CIMGUI_API void igPushIDInt(int int_id)
{
    return ImGui::PushID(int_id);
}
CIMGUI_API void igPopID()
{
    return ImGui::PopID();
}
CIMGUI_API ImGuiID igGetIDStr(const char* str_id)
{
    return ImGui::GetID(str_id);
}
CIMGUI_API ImGuiID igGetIDStrStr(const char* str_id_begin,const char* str_id_end)
{
    return ImGui::GetID(str_id_begin,str_id_end);
}
CIMGUI_API ImGuiID igGetIDPtr(const void* ptr_id)
{
    return ImGui::GetID(ptr_id);
}
CIMGUI_API void igText(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextV(fmt,args);
    va_end(args);
}
CIMGUI_API void igTextV(const char* fmt,va_list args)
{
    return ImGui::TextV(fmt,args);
}
CIMGUI_API void igTextColored(const ImVec4 col,const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextColoredV(col,fmt,args);
    va_end(args);
}
CIMGUI_API void igTextColoredV(const ImVec4 col,const char* fmt,va_list args)
{
    return ImGui::TextColoredV(col,fmt,args);
}
CIMGUI_API void igTextDisabled(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextDisabledV(fmt,args);
    va_end(args);
}
CIMGUI_API void igTextDisabledV(const char* fmt,va_list args)
{
    return ImGui::TextDisabledV(fmt,args);
}
CIMGUI_API void igTextWrapped(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextWrappedV(fmt,args);
    va_end(args);
}
CIMGUI_API void igTextWrappedV(const char* fmt,va_list args)
{
    return ImGui::TextWrappedV(fmt,args);
}
CIMGUI_API void igLabelText(const char* label,const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::LabelTextV(label,fmt,args);
    va_end(args);
}
CIMGUI_API void igLabelTextV(const char* label,const char* fmt,va_list args)
{
    return ImGui::LabelTextV(label,fmt,args);
}
CIMGUI_API void igBulletText(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::BulletTextV(fmt,args);
    va_end(args);
}
CIMGUI_API void igBulletTextV(const char* fmt,va_list args)
{
    return ImGui::BulletTextV(fmt,args);
}
CIMGUI_API bool igButton(const char* label,const ImVec2 size)
{
    return ImGui::Button(label,size);
}
CIMGUI_API bool igSmallButton(const char* label)
{
    return ImGui::SmallButton(label);
}
CIMGUI_API bool igInvisibleButton(const char* str_id,const ImVec2 size)
{
    return ImGui::InvisibleButton(str_id,size);
}
CIMGUI_API bool igArrowButton(const char* str_id,ImGuiDir dir)
{
    return ImGui::ArrowButton(str_id,dir);
}
CIMGUI_API void igImage(ImTextureID user_texture_id,const ImVec2 size,const ImVec2 uv0,const ImVec2 uv1,const ImVec4 tint_col,const ImVec4 border_col)
{
    return ImGui::Image(user_texture_id,size,uv0,uv1,tint_col,border_col);
}
CIMGUI_API bool igImageButton(ImTextureID user_texture_id,const ImVec2 size,const ImVec2 uv0,const ImVec2 uv1,int frame_padding,const ImVec4 bg_col,const ImVec4 tint_col)
{
    return ImGui::ImageButton(user_texture_id,size,uv0,uv1,frame_padding,bg_col,tint_col);
}
CIMGUI_API bool igCheckbox(const char* label,bool* v)
{
    return ImGui::Checkbox(label,v);
}
CIMGUI_API bool igCheckboxFlags(const char* label,unsigned int* flags,unsigned int flags_value)
{
    return ImGui::CheckboxFlags(label,flags,flags_value);
}
CIMGUI_API bool igRadioButtonBool(const char* label,bool active)
{
    return ImGui::RadioButton(label,active);
}
CIMGUI_API bool igRadioButtonIntPtr(const char* label,int* v,int v_button)
{
    return ImGui::RadioButton(label,v,v_button);
}
CIMGUI_API void ImGuiStyle_ScaleAllSizes(ImGuiStyle* self,float scale_factor)
{
    return self->ScaleAllSizes(scale_factor);
}
CIMGUI_API void ImGuiIO_AddInputCharacter(ImGuiIO* self,ImWchar c)
{
    return self->AddInputCharacter(c);
}
CIMGUI_API void ImGuiIO_AddInputCharactersUTF8(ImGuiIO* self,const char* utf8_chars)
{
    return self->AddInputCharactersUTF8(utf8_chars);
}
CIMGUI_API void ImGuiIO_ClearInputCharacters(ImGuiIO* self)
{
    return self->ClearInputCharacters();
}
CIMGUI_API bool ImGuiTextFilter_Draw(ImGuiTextFilter* self,const char* label,float width)
{
    return self->Draw(label,width);
}
CIMGUI_API void ImGuiTextFilter_Build(ImGuiTextFilter* self)
{
    return self->Build();
}
CIMGUI_API void ImGuiTextFilter_Clear(ImGuiTextFilter* self)
{
    return self->Clear();
}
CIMGUI_API bool ImGuiTextFilter_IsActive(ImGuiTextFilter* self)
{
    return self->IsActive();
}
CIMGUI_API const char* TextRange_begin(TextRange* self)
{
    return self->begin();
}
CIMGUI_API const char* TextRange_end(TextRange* self)
{
    return self->end();
}
CIMGUI_API bool TextRange_empty(TextRange* self)
{
    return self->empty();
}
CIMGUI_API void TextRange_split(TextRange* self,char separator,ImVector_TextRange* out)
{
    return self->split(separator,out);
}
CIMGUI_API const char* ImGuiTextBuffer_begin(ImGuiTextBuffer* self)
{
    return self->begin();
}
CIMGUI_API const char* ImGuiTextBuffer_end(ImGuiTextBuffer* self)
{
    return self->end();
}
CIMGUI_API int ImGuiTextBuffer_size(ImGuiTextBuffer* self)
{
    return self->size();
}
CIMGUI_API bool ImGuiTextBuffer_empty(ImGuiTextBuffer* self)
{
    return self->empty();
}
CIMGUI_API void ImGuiTextBuffer_clear(ImGuiTextBuffer* self)
{
    return self->clear();
}
CIMGUI_API void ImGuiTextBuffer_reserve(ImGuiTextBuffer* self,int capacity)
{
    return self->reserve(capacity);
}
CIMGUI_API const char* ImGuiTextBuffer_c_str(ImGuiTextBuffer* self)
{
    return self->c_str();
}
CIMGUI_API void ImGuiTextBuffer_appendfv(ImGuiTextBuffer* self,const char* fmt,va_list args)
{
    return self->appendfv(fmt,args);
}
CIMGUI_API void ImGuiStorage_Clear(ImGuiStorage* self)
{
    return self->Clear();
}
CIMGUI_API int ImGuiStorage_GetInt(ImGuiStorage* self,ImGuiID key,int default_val)
{
    return self->GetInt(key,default_val);
}
CIMGUI_API void ImGuiStorage_SetInt(ImGuiStorage* self,ImGuiID key,int val)
{
    return self->SetInt(key,val);
}
CIMGUI_API bool ImGuiStorage_GetBool(ImGuiStorage* self,ImGuiID key,bool default_val)
{
    return self->GetBool(key,default_val);
}
CIMGUI_API void ImGuiStorage_SetBool(ImGuiStorage* self,ImGuiID key,bool val)
{
    return self->SetBool(key,val);
}
CIMGUI_API float ImGuiStorage_GetFloat(ImGuiStorage* self,ImGuiID key,float default_val)
{
    return self->GetFloat(key,default_val);
}
CIMGUI_API void ImGuiStorage_SetFloat(ImGuiStorage* self,ImGuiID key,float val)
{
    return self->SetFloat(key,val);
}
CIMGUI_API void* ImGuiStorage_GetVoidPtr(ImGuiStorage* self,ImGuiID key)
{
    return self->GetVoidPtr(key);
}
CIMGUI_API void ImGuiStorage_SetVoidPtr(ImGuiStorage* self,ImGuiID key,void* val)
{
    return self->SetVoidPtr(key,val);
}
CIMGUI_API int* ImGuiStorage_GetIntRef(ImGuiStorage* self,ImGuiID key,int default_val)
{
    return self->GetIntRef(key,default_val);
}
CIMGUI_API bool* ImGuiStorage_GetBoolRef(ImGuiStorage* self,ImGuiID key,bool default_val)
{
    return self->GetBoolRef(key,default_val);
}
CIMGUI_API float* ImGuiStorage_GetFloatRef(ImGuiStorage* self,ImGuiID key,float default_val)
{
    return self->GetFloatRef(key,default_val);
}
CIMGUI_API void ImGuiStorage_SetAllInt(ImGuiStorage* self,int val)
{
    return self->SetAllInt(val);
}
CIMGUI_API void ImGuiStorage_BuildSortByKey(ImGuiStorage* self)
{
    return self->BuildSortByKey();
}
CIMGUI_API void ImGuiInputTextCallbackData_DeleteChars(ImGuiInputTextCallbackData* self,int pos,int bytes_count)
{
    return self->DeleteChars(pos,bytes_count);
}
CIMGUI_API bool ImGuiInputTextCallbackData_HasSelection(ImGuiInputTextCallbackData* self)
{
    return self->HasSelection();
}
CIMGUI_API bool ImGuiPayload_IsDataType(ImGuiPayload* self,const char* type)
{
    return self->IsDataType(type);
}
CIMGUI_API bool ImGuiPayload_IsPreview(ImGuiPayload* self)
{
    return self->IsPreview();
}
CIMGUI_API bool ImGuiPayload_IsDelivery(ImGuiPayload* self)
{
    return self->IsDelivery();
}
CIMGUI_API void ImColor_SetHSV(ImColor* self,float h,float s,float v,float a)
{
    return self->SetHSV(h,s,v,a);
}
CIMGUI_API ImColor ImColor_HSV(ImColor* self,float h,float s,float v,float a)
{
    return self->HSV(h,s,v,a);
}
CIMGUI_API bool ImGuiListClipper_Step(ImGuiListClipper* self)
{
    return self->Step();
}
CIMGUI_API void ImGuiListClipper_Begin(ImGuiListClipper* self,int items_count,float items_height)
{
    return self->Begin(items_count,items_height);
}
CIMGUI_API void ImGuiListClipper_End(ImGuiListClipper* self)
{
    return self->End();
}
CIMGUI_API void ImDrawList_PushClipRect(ImDrawList* self,ImVec2 clip_rect_min,ImVec2 clip_rect_max,bool intersect_with_current_clip_rect)
{
    return self->PushClipRect(clip_rect_min,clip_rect_max,intersect_with_current_clip_rect);
}
CIMGUI_API void ImDrawList_PushClipRectFullScreen(ImDrawList* self)
{
    return self->PushClipRectFullScreen();
}
CIMGUI_API void ImDrawList_PopClipRect(ImDrawList* self)
{
    return self->PopClipRect();
}
CIMGUI_API void ImDrawList_PushTextureID(ImDrawList* self,ImTextureID texture_id)
{
    return self->PushTextureID(texture_id);
}
CIMGUI_API void ImDrawList_PopTextureID(ImDrawList* self)
{
    return self->PopTextureID();
}
CIMGUI_API ImVec2 ImDrawList_GetClipRectMin(ImDrawList* self)
{
    return self->GetClipRectMin();
}
CIMGUI_API ImVec2 ImDrawList_GetClipRectMax(ImDrawList* self)
{
    return self->GetClipRectMax();
}
CIMGUI_API void ImDrawList_AddLine(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col,float thickness)
{
    return self->AddLine(a,b,col,thickness);
}
CIMGUI_API void ImDrawList_AddRect(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col,float rounding,int rounding_corners_flags,float thickness)
{
    return self->AddRect(a,b,col,rounding,rounding_corners_flags,thickness);
}
CIMGUI_API void ImDrawList_AddRectFilled(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col,float rounding,int rounding_corners_flags)
{
    return self->AddRectFilled(a,b,col,rounding,rounding_corners_flags);
}
CIMGUI_API void ImDrawList_AddRectFilledMultiColor(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col_upr_left,ImU32 col_upr_right,ImU32 col_bot_right,ImU32 col_bot_left)
{
    return self->AddRectFilledMultiColor(a,b,col_upr_left,col_upr_right,col_bot_right,col_bot_left);
}
CIMGUI_API void ImDrawList_AddQuad(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,ImU32 col,float thickness)
{
    return self->AddQuad(a,b,c,d,col,thickness);
}
CIMGUI_API void ImDrawList_AddQuadFilled(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,ImU32 col)
{
    return self->AddQuadFilled(a,b,c,d,col);
}
CIMGUI_API void ImDrawList_AddTriangle(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,ImU32 col,float thickness)
{
    return self->AddTriangle(a,b,c,col,thickness);
}
CIMGUI_API void ImDrawList_AddTriangleFilled(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,ImU32 col)
{
    return self->AddTriangleFilled(a,b,c,col);
}
CIMGUI_API void ImDrawList_AddCircle(ImDrawList* self,const ImVec2 centre,float radius,ImU32 col,int num_segments,float thickness)
{
    return self->AddCircle(centre,radius,col,num_segments,thickness);
}
CIMGUI_API void ImDrawList_AddCircleFilled(ImDrawList* self,const ImVec2 centre,float radius,ImU32 col,int num_segments)
{
    return self->AddCircleFilled(centre,radius,col,num_segments);
}
CIMGUI_API void ImDrawList_AddText(ImDrawList* self,const ImFont* font,float font_size,const ImVec2 pos,ImU32 col,const char* text_begin,const char* text_end,float wrap_width,const ImVec4* cpu_fine_clip_rect)
{
    return self->AddText(font,font_size,pos,col,text_begin,text_end,wrap_width,cpu_fine_clip_rect);
}
CIMGUI_API void ImDrawList_AddImage(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col)
{
    return self->AddImage(user_texture_id,a,b,uv_a,uv_b,col);
}
CIMGUI_API void ImDrawList_AddImageQuad(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,const ImVec2 uv_a,const ImVec2 uv_b,const ImVec2 uv_c,const ImVec2 uv_d,ImU32 col)
{
    return self->AddImageQuad(user_texture_id,a,b,c,d,uv_a,uv_b,uv_c,uv_d,col);
}
CIMGUI_API void ImDrawList_AddImageRounded(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col,float rounding,int rounding_corners)
{
    return self->AddImageRounded(user_texture_id,a,b,uv_a,uv_b,col,rounding,rounding_corners);
}
CIMGUI_API void ImDrawList_AddPolyline(ImDrawList* self,const ImVec2* points,const int num_points,ImU32 col,bool closed,float thickness)
{
    return self->AddPolyline(points,num_points,col,closed,thickness);
}
CIMGUI_API void ImDrawList_AddConvexPolyFilled(ImDrawList* self,const ImVec2* points,const int num_points,ImU32 col)
{
    return self->AddConvexPolyFilled(points,num_points,col);
}
CIMGUI_API void ImDrawList_AddBezierCurve(ImDrawList* self,const ImVec2 pos0,const ImVec2 cp0,const ImVec2 cp1,const ImVec2 pos1,ImU32 col,float thickness,int num_segments)
{
    return self->AddBezierCurve(pos0,cp0,cp1,pos1,col,thickness,num_segments);
}
CIMGUI_API void ImDrawList_PathClear(ImDrawList* self)
{
    return self->PathClear();
}
CIMGUI_API void ImDrawList_PathLineTo(ImDrawList* self,const ImVec2 pos)
{
    return self->PathLineTo(pos);
}
CIMGUI_API void ImDrawList_PathLineToMergeDuplicate(ImDrawList* self,const ImVec2 pos)
{
    return self->PathLineToMergeDuplicate(pos);
}
CIMGUI_API void ImDrawList_PathFillConvex(ImDrawList* self,ImU32 col)
{
    return self->PathFillConvex(col);
}
CIMGUI_API void ImDrawList_PathStroke(ImDrawList* self,ImU32 col,bool closed,float thickness)
{
    return self->PathStroke(col,closed,thickness);
}
CIMGUI_API void ImDrawList_PathArcTo(ImDrawList* self,const ImVec2 centre,float radius,float a_min,float a_max,int num_segments)
{
    return self->PathArcTo(centre,radius,a_min,a_max,num_segments);
}
CIMGUI_API void ImDrawList_PathArcToFast(ImDrawList* self,const ImVec2 centre,float radius,int a_min_of_12,int a_max_of_12)
{
    return self->PathArcToFast(centre,radius,a_min_of_12,a_max_of_12);
}
CIMGUI_API void ImDrawList_PathBezierCurveTo(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,int num_segments)
{
    return self->PathBezierCurveTo(p1,p2,p3,num_segments);
}
CIMGUI_API void ImDrawList_PathRect(ImDrawList* self,const ImVec2 rect_min,const ImVec2 rect_max,float rounding,int rounding_corners_flags)
{
    return self->PathRect(rect_min,rect_max,rounding,rounding_corners_flags);
}
CIMGUI_API void ImDrawList_ChannelsSplit(ImDrawList* self,int channels_count)
{
    return self->ChannelsSplit(channels_count);
}
CIMGUI_API void ImDrawList_ChannelsMerge(ImDrawList* self)
{
    return self->ChannelsMerge();
}
CIMGUI_API void ImDrawList_ChannelsSetCurrent(ImDrawList* self,int channel_index)
{
    return self->ChannelsSetCurrent(channel_index);
}
CIMGUI_API void ImDrawList_AddCallback(ImDrawList* self,ImDrawCallback callback,void* callback_data)
{
    return self->AddCallback(callback,callback_data);
}
CIMGUI_API void ImDrawList_AddDrawCmd(ImDrawList* self)
{
    return self->AddDrawCmd();
}
CIMGUI_API ImDrawList* ImDrawList_CloneOutput(ImDrawList* self)
{
    return self->CloneOutput();
}
CIMGUI_API void ImDrawList_Clear(ImDrawList* self)
{
    return self->Clear();
}
CIMGUI_API void ImDrawList_ClearFreeMemory(ImDrawList* self)
{
    return self->ClearFreeMemory();
}
CIMGUI_API void ImDrawList_PrimReserve(ImDrawList* self,int idx_count,int vtx_count)
{
    return self->PrimReserve(idx_count,vtx_count);
}
CIMGUI_API void ImDrawList_PrimRect(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col)
{
    return self->PrimRect(a,b,col);
}
CIMGUI_API void ImDrawList_PrimRectUV(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col)
{
    return self->PrimRectUV(a,b,uv_a,uv_b,col);
}
CIMGUI_API void ImDrawList_PrimQuadUV(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,const ImVec2 uv_a,const ImVec2 uv_b,const ImVec2 uv_c,const ImVec2 uv_d,ImU32 col)
{
    return self->PrimQuadUV(a,b,c,d,uv_a,uv_b,uv_c,uv_d,col);
}
CIMGUI_API void ImDrawList_PrimWriteVtx(ImDrawList* self,const ImVec2 pos,const ImVec2 uv,ImU32 col)
{
    return self->PrimWriteVtx(pos,uv,col);
}
CIMGUI_API void ImDrawList_PrimWriteIdx(ImDrawList* self,ImDrawIdx idx)
{
    return self->PrimWriteIdx(idx);
}
CIMGUI_API void ImDrawList_PrimVtx(ImDrawList* self,const ImVec2 pos,const ImVec2 uv,ImU32 col)
{
    return self->PrimVtx(pos,uv,col);
}
CIMGUI_API void ImDrawList_UpdateClipRect(ImDrawList* self)
{
    return self->UpdateClipRect();
}
CIMGUI_API void ImDrawList_UpdateTextureID(ImDrawList* self)
{
    return self->UpdateTextureID();
}
CIMGUI_API void ImDrawData_DeIndexAllBuffers(ImDrawData* self)
{
    return self->DeIndexAllBuffers();
}
CIMGUI_API void ImDrawData_ScaleClipRects(ImDrawData* self,const ImVec2 sc)
{
    return self->ScaleClipRects(sc);
}
CIMGUI_API ImFont* ImFontAtlas_AddFont(ImFontAtlas* self,const ImFontConfig* font_cfg)
{
    return self->AddFont(font_cfg);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontDefault(ImFontAtlas* self,const ImFontConfig* font_cfg)
{
    return self->AddFontDefault(font_cfg);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontFromFileTTF(ImFontAtlas* self,const char* filename,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges)
{
    return self->AddFontFromFileTTF(filename,size_pixels,font_cfg,glyph_ranges);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontFromMemoryTTF(ImFontAtlas* self,void* font_data,int font_size,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges)
{
    return self->AddFontFromMemoryTTF(font_data,font_size,size_pixels,font_cfg,glyph_ranges);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontFromMemoryCompressedTTF(ImFontAtlas* self,const void* compressed_font_data,int compressed_font_size,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges)
{
    return self->AddFontFromMemoryCompressedTTF(compressed_font_data,compressed_font_size,size_pixels,font_cfg,glyph_ranges);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontFromMemoryCompressedBase85TTF(ImFontAtlas* self,const char* compressed_font_data_base85,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges)
{
    return self->AddFontFromMemoryCompressedBase85TTF(compressed_font_data_base85,size_pixels,font_cfg,glyph_ranges);
}
CIMGUI_API void ImFontAtlas_ClearInputData(ImFontAtlas* self)
{
    return self->ClearInputData();
}
CIMGUI_API void ImFontAtlas_ClearTexData(ImFontAtlas* self)
{
    return self->ClearTexData();
}
CIMGUI_API void ImFontAtlas_ClearFonts(ImFontAtlas* self)
{
    return self->ClearFonts();
}
CIMGUI_API void ImFontAtlas_Clear(ImFontAtlas* self)
{
    return self->Clear();
}
CIMGUI_API bool ImFontAtlas_Build(ImFontAtlas* self)
{
    return self->Build();
}
CIMGUI_API void ImFontAtlas_GetTexDataAsAlpha8(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height,int* out_bytes_per_pixel)
{
    return self->GetTexDataAsAlpha8(out_pixels,out_width,out_height,out_bytes_per_pixel);
}
CIMGUI_API void ImFontAtlas_GetTexDataAsRGBA32(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height,int* out_bytes_per_pixel)
{
    return self->GetTexDataAsRGBA32(out_pixels,out_width,out_height,out_bytes_per_pixel);
}
CIMGUI_API void ImFontAtlas_SetTexID(ImFontAtlas* self,ImTextureID id)
{
    return self->SetTexID(id);
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesDefault(ImFontAtlas* self)
{
    return self->GetGlyphRangesDefault();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesKorean(ImFontAtlas* self)
{
    return self->GetGlyphRangesKorean();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesJapanese(ImFontAtlas* self)
{
    return self->GetGlyphRangesJapanese();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesChineseFull(ImFontAtlas* self)
{
    return self->GetGlyphRangesChineseFull();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesChineseSimplifiedCommon(ImFontAtlas* self)
{
    return self->GetGlyphRangesChineseSimplifiedCommon();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesCyrillic(ImFontAtlas* self)
{
    return self->GetGlyphRangesCyrillic();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesThai(ImFontAtlas* self)
{
    return self->GetGlyphRangesThai();
}
CIMGUI_API bool GlyphRangesBuilder_GetBit(GlyphRangesBuilder* self,int n)
{
    return self->GetBit(n);
}
CIMGUI_API void GlyphRangesBuilder_SetBit(GlyphRangesBuilder* self,int n)
{
    return self->SetBit(n);
}
CIMGUI_API void GlyphRangesBuilder_AddChar(GlyphRangesBuilder* self,ImWchar c)
{
    return self->AddChar(c);
}
CIMGUI_API void GlyphRangesBuilder_AddRanges(GlyphRangesBuilder* self,const ImWchar* ranges)
{
    return self->AddRanges(ranges);
}
CIMGUI_API void GlyphRangesBuilder_BuildRanges(GlyphRangesBuilder* self,ImVector_ImWchar* out_ranges)
{
    return self->BuildRanges(out_ranges);
}
CIMGUI_API bool CustomRect_IsPacked(CustomRect* self)
{
    return self->IsPacked();
}
CIMGUI_API int ImFontAtlas_AddCustomRectRegular(ImFontAtlas* self,unsigned int id,int width,int height)
{
    return self->AddCustomRectRegular(id,width,height);
}
CIMGUI_API int ImFontAtlas_AddCustomRectFontGlyph(ImFontAtlas* self,ImFont* font,ImWchar id,int width,int height,float advance_x,const ImVec2 offset)
{
    return self->AddCustomRectFontGlyph(font,id,width,height,advance_x,offset);
}
CIMGUI_API void ImFontAtlas_CalcCustomRectUV(ImFontAtlas* self,const CustomRect* rect,ImVec2* out_uv_min,ImVec2* out_uv_max)
{
    return self->CalcCustomRectUV(rect,out_uv_min,out_uv_max);
}
CIMGUI_API bool ImFontAtlas_GetMouseCursorTexData(ImFontAtlas* self,ImGuiMouseCursor cursor,ImVec2* out_offset,ImVec2* out_size,ImVec2 out_uv_border[2],ImVec2 out_uv_fill[2])
{
    return self->GetMouseCursorTexData(cursor,out_offset,out_size,out_uv_border,out_uv_fill);
}
CIMGUI_API void ImFont_ClearOutputData(ImFont* self)
{
    return self->ClearOutputData();
}
CIMGUI_API void ImFont_BuildLookupTable(ImFont* self)
{
    return self->BuildLookupTable();
}
CIMGUI_API const ImFontGlyph* ImFont_FindGlyph(ImFont* self,ImWchar c)
{
    return self->FindGlyph(c);
}
CIMGUI_API const ImFontGlyph* ImFont_FindGlyphNoFallback(ImFont* self,ImWchar c)
{
    return self->FindGlyphNoFallback(c);
}
CIMGUI_API void ImFont_SetFallbackChar(ImFont* self,ImWchar c)
{
    return self->SetFallbackChar(c);
}
CIMGUI_API float ImFont_GetCharAdvance(ImFont* self,ImWchar c)
{
    return self->GetCharAdvance(c);
}
CIMGUI_API const char* ImFont_GetDebugName(ImFont* self)
{
    return self->GetDebugName();
}
CIMGUI_API const char* ImFont_CalcWordWrapPositionA(ImFont* self,float scale,const char* text,const char* text_end,float wrap_width)
{
    return self->CalcWordWrapPositionA(scale,text,text_end,wrap_width);
}
CIMGUI_API void ImFont_RenderChar(ImFont* self,ImDrawList* draw_list,float size,ImVec2 pos,ImU32 col,ImWchar c)
{
    return self->RenderChar(draw_list,size,pos,col,c);
}
CIMGUI_API void ImFont_RenderText(ImFont* self,ImDrawList* draw_list,float size,ImVec2 pos,ImU32 col,const ImVec4 clip_rect,const char* text_begin,const char* text_end,float wrap_width,bool cpu_fine_clip)
{
    return self->RenderText(draw_list,size,pos,col,clip_rect,text_begin,text_end,wrap_width,cpu_fine_clip);
}
CIMGUI_API void ImFont_GrowIndex(ImFont* self,int new_size)
{
    return self->GrowIndex(new_size);
}
CIMGUI_API void ImFont_AddGlyph(ImFont* self,ImWchar c,float x0,float y0,float x1,float y1,float u0,float v0,float u1,float v1,float advance_x)
{
    return self->AddGlyph(c,x0,y0,x1,y1,u0,v0,u1,v1,advance_x);
}
CIMGUI_API void ImFont_AddRemapChar(ImFont* self,ImWchar dst,ImWchar src,bool overwrite_dst)
{
    return self->AddRemapChar(dst,src,overwrite_dst);
}
CIMGUI_API void igGetWindowPos_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetWindowPos();
}
CIMGUI_API ImVec2_Simple igGetWindowPos_nonUDT2()
{
    ImVec2 ret = ImGui::GetWindowPos();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void igGetWindowSize_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetWindowSize();
}
CIMGUI_API ImVec2_Simple igGetWindowSize_nonUDT2()
{
    ImVec2 ret = ImGui::GetWindowSize();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void igGetContentRegionMax_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetContentRegionMax();
}
CIMGUI_API ImVec2_Simple igGetContentRegionMax_nonUDT2()
{
    ImVec2 ret = ImGui::GetContentRegionMax();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void igGetContentRegionAvail_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetContentRegionAvail();
}
CIMGUI_API ImVec2_Simple igGetContentRegionAvail_nonUDT2()
{
    ImVec2 ret = ImGui::GetContentRegionAvail();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void igGetWindowContentRegionMin_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetWindowContentRegionMin();
}
CIMGUI_API ImVec2_Simple igGetWindowContentRegionMin_nonUDT2()
{
    ImVec2 ret = ImGui::GetWindowContentRegionMin();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void igGetWindowContentRegionMax_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetWindowContentRegionMax();
}
CIMGUI_API ImVec2_Simple igGetWindowContentRegionMax_nonUDT2()
{
    ImVec2 ret = ImGui::GetWindowContentRegionMax();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void igGetFontTexUvWhitePixel_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetFontTexUvWhitePixel();
}
CIMGUI_API ImVec2_Simple igGetFontTexUvWhitePixel_nonUDT2()
{
    ImVec2 ret = ImGui::GetFontTexUvWhitePixel();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void igGetCursorPos_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetCursorPos();
}
CIMGUI_API ImVec2_Simple igGetCursorPos_nonUDT2()
{
    ImVec2 ret = ImGui::GetCursorPos();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void igGetCursorStartPos_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetCursorStartPos();
}
CIMGUI_API ImVec2_Simple igGetCursorStartPos_nonUDT2()
{
    ImVec2 ret = ImGui::GetCursorStartPos();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void igGetCursorScreenPos_nonUDT(ImVec2 *pOut)
{
    *pOut = ImGui::GetCursorScreenPos();
}
CIMGUI_API ImVec2_Simple igGetCursorScreenPos_nonUDT2()
{
    ImVec2 ret = ImGui::GetCursorScreenPos();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void ImColor_HSV_nonUDT(ImColor* self,ImColor *pOut,float h,float s,float v,float a)
{
    *pOut = self->HSV(h,s,v,a);
}
CIMGUI_API ImColor_Simple ImColor_HSV_nonUDT2(ImColor* self,float h,float s,float v,float a)
{
    ImColor ret = self->HSV(h,s,v,a);
    ImColor_Simple ret2 = ImColorToSimple(ret);
    return ret2;
}
CIMGUI_API void ImDrawList_GetClipRectMin_nonUDT(ImDrawList* self,ImVec2 *pOut)
{
    *pOut = self->GetClipRectMin();
}
CIMGUI_API ImVec2_Simple ImDrawList_GetClipRectMin_nonUDT2(ImDrawList* self)
{
    ImVec2 ret = self->GetClipRectMin();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}
CIMGUI_API void ImDrawList_GetClipRectMax_nonUDT(ImDrawList* self,ImVec2 *pOut)
{
    *pOut = self->GetClipRectMax();
}
CIMGUI_API ImVec2_Simple ImDrawList_GetClipRectMax_nonUDT2(ImDrawList* self)
{
    ImVec2 ret = self->GetClipRectMax();
    ImVec2_Simple ret2 = ImVec2ToSimple(ret);
    return ret2;
}



/////////////////////////////manual written functions
CIMGUI_API void igLogText(CONST char *fmt, ...)
{
    char buffer[256];
    va_list args;
    va_start(args, fmt);
    vsnprintf(buffer, 256, fmt, args);
    va_end(args);

    ImGui::LogText("%s", buffer);
}
CIMGUI_API void ImGuiTextBuffer_appendf(struct ImGuiTextBuffer *buffer, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    buffer->appendfv(fmt, args);
    va_end(args);
}
CIMGUI_API void ImFontConfig_DefaultConstructor(ImFontConfig *config)
{
    *config = ImFontConfig();
}
CIMGUI_API float igGET_FLT_MAX()
{
    return FLT_MAX;
}
CIMGUI_API void igColorConvertRGBtoHSV(float r,float g,float b,float *out_h,float *out_s,float *out_v)
{
    ImGui::ColorConvertRGBtoHSV(r,g,b,*out_h,*out_s,*out_v);
}
CIMGUI_API void igColorConvertHSVtoRGB(float h,float s,float v,float *out_r,float *out_g,float *out_b)
{
    ImGui::ColorConvertHSVtoRGB(h,s,v,*out_r,*out_g,*out_b);
}
