[Variables]
    skin.Hidden=0
    color.Border=255,255,255
    color.Icon=50,50,50
    color.IconHL=100,100,100
    color.IconBorder=255,255,255
    skin.BGHidden=0

[sHighlight]
    X=r
    Y=r
    Shape=Rectangle (0),(0),(1940),(24),0 | StrokeWidth 0 | Extend sHLShape
    sHLShape=Fill Color #color.BG#00 | Stroke Color #color.Border#,0
    ;MouseOverAction=[!SetOption [#CURRENTSECTION] sHLShape "Fill Color #color.BG#50 | Stroke Color #color.Border#,240"][!UpdateMeter [#CURRENTSECTION]][!Redraw]
    ;MouseLeaveAction=[!SetOption [#CURRENTSECTION] sHLShape "Fill Color #color.BG#00 | Stroke Color #color.Border#,0"][!UpdateMeter [#CURRENTSECTION]][!Redraw]
    Hidden=#skin.BGHidden#

[sContainer]
    X=0
    Y=0
    W=0
    H=24
    SolidColor=000000FF
    UpdateDivider=-1
    Hidden=#skin.Hidden#    
